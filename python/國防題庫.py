import random

def load_questions(file_path):
    questions = []
    with open(file_path, 'r', encoding='utf-8') as file:
        lines = file.readlines()
        for line in lines:
            if line.strip().startswith("¡]¡^"):
                questions.append(line.strip())
    return questions

def extract_question(questions):
    return random.choice(questions)

def ask_question(question):
    print("Question:", question)
    user_answer = input("Your Answer: ").strip()
    return user_answer

def check_answer(question, user_answer):
    correct_answer = question.split("(A)")[1].strip().split(")")[0].strip()
    
    if user_answer.upper() == correct_answer.upper():
        print("True\n")
        return True
    else:
        print(f"False. Correct Answer: {correct_answer}\n")
        return False

def main():
    file_path = "Test.txt"
    questions = load_questions(file_path)

    while True:
        selected_question = extract_question(questions)
        user_answer = ask_question(selected_question)
        check_answer(selected_question, user_answer)

if __name__ == "__main__":
    main()
