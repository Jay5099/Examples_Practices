/** @format */

// import logo from "./logo.svg";
import "./App.css";
let a = " patel jay";
function App() {
  return (
    <>
      <nav>
        <li>home</li>
        <li>about</li>
        <li>contact</li>
      </nav>
      <div className="container">
        <h1>
          Hello <b>{a}</b>
        </h1>
        <p>
          Lorem ipsum dolor sit amet consectetur adipisicing elit. At labore
          quia consequuntur. Ad molestiae eveniet provident facilis laudantium
          maiores vel labore reprehenderit omnis quasi quibusdam fugiat eaque
          distinctio, quidem sunt!
        </p>
      </div>
    </>
  );
}

export default App;
