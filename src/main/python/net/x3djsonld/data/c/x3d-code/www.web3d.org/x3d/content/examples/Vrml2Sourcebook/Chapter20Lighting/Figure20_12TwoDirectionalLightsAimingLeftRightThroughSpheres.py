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
    meta(content='Figure20_12TwoDirectionalLightsAimingLeftRightThroughSpheres.x3d',name='title'),
    meta(content='Figure 20.12, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch20/20fig12.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='8 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A sphere world illuminated by a DirectionalLight aiming up and to the right. Compare Figures 20.11a, 11b, 12.',name='description'),
    meta(content='Figure20_11aDirectionalLightAimingRightThroughSpheres.x3d',name='reference'),
    meta(content='Figure20_11bDirectionalLightAimingUpperRightThroughSpheres.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter20Lighting/Figure20_12TwoDirectionalLightsAimingLeftRightThroughSpheres.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure20_12TwoDirectionalLightsAimingLeftRightThroughSpheres.x3d'),
    Viewpoint(description='DirectionalLight shining parallel rays to right. No location, light source is infinitely distant.',position=(0,0,30)),
    #  Note headlight turned off in NavigationInfo. Most browsers allow user toggling headlight also. 
    #  This NavigationInfo node is bound at runtime and overrides the NavigationInfo headlight setting within the Inlined scene. 
    NavigationInfo(headlight=False),
    Transform(translation=(-9,0,0),
      children=[
      DirectionalLight(),
      Inline(DEF='HeadlightSpheres',bboxSize=(16,16,16),url=["Figure20_04HeadlightSpheres.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter20Lighting/Figure20_04HeadlightSpheres.x3d","Figure20_04HeadlightSpheres.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter20Lighting/Figure20_04HeadlightSpheres.wrl"])]),
    #  Separate each set of spheres to emphasize different light directions. Try swapping directions... 
    Transform(translation=(9,0,0),
      children=[
      DirectionalLight(direction=(-1,0,0)),
      Inline(USE='HeadlightSpheres')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure20_12TwoDirectionalLightsAimingLeftRightThroughSpheres.py")
