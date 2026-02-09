---
name : generate-tdd
description : 작성된 코드에 대해 TDD 코드를 자동으로 생성
---

# git commit skill 사용법

## git 사용 순서
- Step 1. TDD 코드를 작성할 소스 코드의 위치를 입력받음
- Step 2. 해당 위치 아래 .TDD 라는 이름으로 하위 디렉터리를 만들고, TDD 코드들을 이 위치에 생성함
  - 테스트 함수의 이름은 test_<filename>_<function_name> 과 같은 형태로 작성
- Step 3. 작성한 TDD 코드들을 빌드하고 실행한 결과를 .TDD 디렉터리 아래 test.md 라는 파일에 기록
  - 작성 결과는 테스트 함수의 이름과 PASS/FAIL 여부를 상단에 기록
  - 테스트 함수를 수행한 output(출력 결과)를 하단에 기록 (보기좋게 indent 4로 들여쓰기)
  