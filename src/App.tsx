import { BrowserRouter, Route, Switch } from 'react-router-dom'

import { Home } from './pages/Home';

import './styles/global.css'

function App() {
  return (
    <BrowserRouter>
      <Switch>
        <Route path="/" component={Home} exact />
      </Switch>
    </BrowserRouter>
  );
}

export default App;
