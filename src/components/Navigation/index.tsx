import { Container } from './styles'

import LogoIcon from '../../assets/images/logo.svg'
import GitHubIcon from '../../assets/icons/github.svg'
import LinkedinIcon from '../../assets/icons/linkedin.svg'

export function Navigation() {
    return(
        <Container>
            <img src={LogoIcon} alt='Pandemia logo' />
            <div className="menu">
                <a href='!#gameassets'>Game assets</a>
                <a href='https://github.com/alexsantosdev/pandemia' target='_blank'><img src={GitHubIcon} alt='GitHub icon' /></a>
                <a href=''><img src={LinkedinIcon} alt='Linkedin icon' /></a>
            </div>
        </Container>
    )
}