import requests
import os 

OWNER = 'tynnpdhsp'
REPO = 'cp-practice'
TOKEN = os.getenv('UPDATE_PRACTICE')  
 
def get_file_count():
    url = f'https://api.github.com/repos/{OWNER}/{REPO}/git/trees/main?recursive=1'
    headers = {
        'Authorization': f'token {TOKEN}',
        'Accept': 'application/vnd.github.v3+json'
    } 

    response = requests.get(url, headers=headers)
    data = response.json()

    if 'tree' not in data:
        raise SystemExit(f'GitHub API error {response.status_code}: {data}')

    file_count = sum(1 for item in data['tree'] if item['type'] == 'blob')
    return file_count
 
def update_readme(file_count):
    readme_path = 'README.md'

    with open(readme_path, 'r', newline='') as file:
        content = file.readlines()

    for i, line in enumerate(content):
        if line.startswith('- Số lượng file bài giải hiện tại: '):
            eol = '\r\n' if line.endswith('\r\n') else '\n'
            content[i] = f'- Số lượng file bài giải hiện tại: {file_count}.{eol}'
            break

    with open(readme_path, 'w', newline='') as file:
        file.writelines(content)

    print(f'Updated README.md with file count: {file_count}')

if __name__ == "__main__":
    file_count = get_file_count()
    print(f'File count: {file_count}')  
    update_readme(file_count)
