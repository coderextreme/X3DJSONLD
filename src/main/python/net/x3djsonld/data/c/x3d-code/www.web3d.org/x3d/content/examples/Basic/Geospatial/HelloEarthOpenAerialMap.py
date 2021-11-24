###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='HelloEarthOpenAerialMap.x3d',name='title'),
    meta(content='Simplest example to load X3D Earth into an X3D scene.',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='25 February 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://OpenAerialMap.org',name='reference'),
    meta(content='https://www.web3d.org/x3d-earth',name='reference'),
    meta(content='http://x3d-earth.nps.edu',name='reference'),
    meta(content='OpenAerialMapToX3D.php',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/HelloEarthOpenAerialMap.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  a simple Inline node is all that is needed for any scene to use X3D Earth assets 
    children=[
    WorldInfo(title='HelloEarthOpenAerialMap.x3d'),
    Inline(url=["http://x3d-earth.nps.edu/oamdemo.x3d"])]
    #  TODO: consider exchanging further configuration information with server via IMPORT/EXPORT 
    #  TODO: also consider passed parameters to server in the url, similar to HTML forms 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloEarthOpenAerialMap.py")
