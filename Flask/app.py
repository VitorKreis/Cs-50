from flask import Flask, render_template, request
app = Flask(__name__)##Inicia o Flask em app

SPORTS = [
    "Basketball",
    "Soccer",
    "Futebol Americano"
]

@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)


@app.route("/register", methods=["POST"])
def register():
    if not request.form.get("name") or request.form.get("sports") not in ["Basketball", "Soccer", "Futebol Americano"] :
        return render_template("failure.html")

    return render_template("succes.html")
