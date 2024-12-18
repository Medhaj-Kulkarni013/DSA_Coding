from tkinter import *
from tkinter import filedialog
import pyttsx3
import PyPDF2

# Create Tkinter window
root = Tk()
root.title("PDF to Audio Converter")
root.geometry("500x400")
root.configure(bg="purple")

# Create Labels
Label(root, text="PDF to Audio Converter", font=("Helvetica", 20), bg="purple", fg="white").pack(pady=10)
Label(root, text="Select PDF File", font=("Helvetica", 12), bg="purple", fg="white").pack(pady=10)

# Create Entry Fields
pdf_path = StringVar()
Label(root, textvariable=pdf_path, width=50).pack(pady=10)

start_page = IntVar()
end_page = IntVar()

Label(root, text="Enter Start Page", font=("Helvetica", 12), bg="purple", fg="white").pack(pady=10)
Entry(root, textvariable=start_page).pack(pady=10)

Label(root, text="Enter End Page", font=("Helvetica", 12), bg="purple", fg="white").pack(pady=10)
Entry(root, textvariable=end_page).pack(pady=10)

lang = StringVar()
Label(root, text="Select Language", font=("Helvetica", 12), bg="purple", fg="white").pack(pady=10)
OptionMenu(root, lang, "English", "Hindi", "Marathi", "German", "Spanish", "French").pack(pady=10)

# Create Function for Conversion
def convert_pdf_to_audio():
    # Open file dialog box to select PDF file
    pdf_file_path = filedialog.askopenfilename(filetypes=[("PDF Files", "*.pdf")])

    if pdf_file_path:
        # Get PDF File
        pdf_file = open(pdf_file_path, 'rb')
        pdf_reader = PyPDF2.PdfReader(pdf_file)

        # Initialize Text-to-Speech engine
        engine = pyttsx3.init()
        voices = engine.getProperty('voices')
        engine.setProperty('voice', voices[0].id) # Default voice
        engine.setProperty('language', lang.get()) # Set language

        # Convert each page to audio
        for page_num in range(start_page.get() - 1, end_page.get()):
            page = pdf_reader.pages[page_num]
            text = page.extract_text()
            engine.say(text)
            engine.runAndWait()

        # Close PDF File
        pdf_file.close()

# Create Convert Button
Button(root, text="SELECT PDF TO CONVERT", command=convert_pdf_to_audio, bg="white", fg="purple", font=("Helvetica", 14)).pack(pady=10)

# Run Tkinter window
root.mainloop()