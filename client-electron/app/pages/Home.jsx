import React from 'react';
import Logo from '../components/Logo.jsx';
import LogoImage from '../images/logo-ring.svg';

class Home extends React.Component {
  render() {
    return (
      <div className="landing">
        <div className="App-inner">
          <Logo
            logoPath={LogoImage}
             width="350" />
          <h1 className="landing__title"> React electron ring client POC</h1>
        </div>
      </div>
    );
  }
}

export default Home;
