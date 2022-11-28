/** @format */

import React,{useState} from 'react'
import PropTypes from 'prop-types'

export default function Navbar(props) {

  const [myStyle, setMyStyle] = useState({
    color:'black',
    backgroundColor:'white'
  })

  const [btntext, setbtntext] = useState("Enable Dark Mode")

  const toggleStyle=()=>{
    if(myStyle.color==='white'){
      setMyStyle({
        color:'black',
        backgroundColor:'white'
      })
      setbtntext("Enable Dark Mode")
    }
    else{
      setMyStyle({
        color:'white',
      backgroundColor:'black',
      // border:'1px solid white'
      })
      
      setbtntext("Enable Light Mode")
    }
  }

  return (
    <nav className='navbar navbar-expand-lg bg-light'>
      <div className='container-fluid'style={myStyle}>
        <a className='navbar-brand' href='/'style={myStyle}>
          {props.title}
        </a>
        <button
          className='navbar-toggler'
          type='button'
          data-bs-toggle='collapse'
          data-bs-target='#navbarSupportedContent'
          aria-controls='navbarSupportedContent'
          aria-expanded='false'
          aria-label='Toggle navigation'
        >
          <span className='navbar-toggler-icon'></span>
        </button>
        <div className='collapse navbar-collapse' id='navbarSupportedContent'>
          <ul className='navbar-nav me-auto mb-2 mb-lg-0'>
            <li className='nav-item'>
              <a className='nav-link active' aria-current='page' href='/'style={myStyle}>
                Home
              </a>
            </li>
            <li className='nav-item'>
              <a className='nav-link' href='/'style={myStyle}>
                {props.aboutText}
              </a>
            </li>
            <li className='nav-item'>
              <button type="button" onClick={toggleStyle} className="btn btn-primary">{btntext}</button>
            </li>
          </ul>
          <form className='d-flex' role='search'>
            <input
              className='form-control me-2'
              type='search'
              placeholder='Search'
              aria-label='Search'
            />
            <button className='btn btn-primary' type='submit'>
              Search
            </button>
          </form>
        </div>
      </div>
    </nav>
  )
}
Navbar.propTypes = {
  title: PropTypes.string.isRequired,
  aboutText: PropTypes.string.isRequired,
}
Navbar.defaultProps = {
  title: 'Set title here',
  aboutText: 'About',
}
