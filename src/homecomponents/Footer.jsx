import React, {Component} from 'react';
import GitHubButton from 'react-github-btn'
import './style.css'

function Footer() {
  return (
    <div>
     
    
        <div className="footer">
           <p>   This website was made by Pande Aditya.....! ❤️ 🚀</p>
           <p>Connect with me on Github <span> </span><GitHubButton href="https://github.com/adityapandeji"  aria-label="Follow @adityapandeji on GitHub">Follow @adityapandeji</GitHubButton>
           </p>

          <div class="footer-copyright text-center py-3">© 2023 Copyright Reserved @ Pande Aditya</div>  
        </div>
    </div>
  )
}

export default Footer

