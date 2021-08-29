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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Figure20_15aSpotLightSpheres.x3d',name='title'),
    meta(content='Figure 20.15a, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch20/20fig15a.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='10 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A sphere world illuminated by a SpotLight aiming to the right. Compare Figures 20.15a, 15b.',name='description'),
    meta(content='Figure20_15bWideAngleSpotLightSpheres.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter20Lighting/Figure20_15aSpotLightSpheres.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure20_15aSpotLightSpheres.x3d'),
    Viewpoint(description='SpotLight shining a cone of light rays to right.',position=(0,0,30)),
    #  Note headlight turned off in NavigationInfo. Most browsers allow user toggling headlight also. 
    #  This NavigationInfo node is bound at runtime and overrides the NavigationInfo headlight setting within the Inlined scene. 
    NavigationInfo(headlight=False),
    Group(
      children=[
      SpotLight(ambientIntensity=0.5,beamWidth=1.570796,cutOffAngle=0.393,location=(-9,0,0),radius=16),
      DirectionalLight(intensity=0.4),
      Inline(bboxSize=(16,16,16),url=["Figure20_04HeadlightSpheres.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter20Lighting/Figure20_04HeadlightSpheres.x3d","Figure20_04HeadlightSpheres.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter20Lighting/Figure20_04HeadlightSpheres.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure20_15aSpotLightSpheres.py")
