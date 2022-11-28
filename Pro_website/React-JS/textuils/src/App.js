/** @format */

// import logo from "./logo.svg";
import './App.css'
import Navbar from './Componenets/Navbar'
import TextForm from './Componenets/TextForm'
// let a = " patel jay";
function App() {
  return (
    <>
      <Navbar title='TextUtils' />
      <div className='container'>
        <TextForm heading='Enter the text to analyze' />
      </div>
    </>
  )
}

export default App
