/** @format */

import React, { useState } from 'react'

export default function TextForm(props) {
  const handleUpClick = () => {
    // console.log('uppercase was clicked'+text );
    let newText=text.toUpperCase();
    setText(newText) 
  }
  const handleOnChange = (event) => {
    // console.log('onchange');
    setText(event.target.value);
  }
  const [text,setText] = useState('Enter text here'); 

  //text="new text"; //correct way
  //setText("new text"); //correct way
  return (
    <div>
      <h1>{props.heading}</h1>
      <div className='mb-3'>
        <textarea
          className='form-label'
          value={text}
          onChange={handleOnChange}
          id='myBox'
          cols={100}
          rows={12}
        ></textarea>
      </div>
      <button className='btn btn-primary' onClick={handleUpClick}>
        Convert to UpperCase
      </button>
    </div>
  )
}
