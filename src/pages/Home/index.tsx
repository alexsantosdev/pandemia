import { Navigation } from '../../components/Navigation'

import GooglePlayIcon from '../../assets/icons/googleplay.svg'
import FolderImage from '../../assets/images/folder.svg'

import { Container } from './styles'

export function Home() {
    return(
        <Container>
            <Navigation />
            <div className='content'>
                <div className="side">
                    <h2>
                        Divirta-se no mais frenético <br />
                        e emocionante game de <br />
                        plataforma 2D!
                    </h2>
                    <br />
                    <span>
                        Embarque nessa jornada, encontre <br />
                        vacinas e cure os infectados.
                    </span>
                    <span>Em breve:</span>
                    <img src={GooglePlayIcon} alt='GooglePlay Icon' />
                </div>
                <img src={FolderImage} alt='Folder' />
            </div>
        </Container>
    )
}