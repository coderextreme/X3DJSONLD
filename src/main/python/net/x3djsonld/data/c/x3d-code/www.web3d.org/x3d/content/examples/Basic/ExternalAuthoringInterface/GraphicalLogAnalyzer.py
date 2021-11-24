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
    meta(content='GraphicalLogAnalyzer.x3d',name='title'),
    meta(content='GraphicalLogAnalyzerDisplay.html',name='example'),
    meta(content='Graphical Log Analyzer (GLA) reads data from a file to create a visualization - load the GraphicalLogAnalyzerDisplay HTML page to test functionality.',name='description'),
    meta(content='requires External Authoring Interface (EAI) as implemented by Cortona. File read/display functionality only works when running in Netscape.',name='warning'),
    meta(content='Lindsey Lack',name='creator'),
    meta(content='2 May 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Under development. VRML 97 EAI support appears inconsistent for various browsers.',name='warning'),
    meta(content='GraphicalLogAnalyzer.ppt',name='reference'),
    meta(content='GraphicalLogAnalyzer.java',name='reference'),
    meta(content='javadoc/index.html',name='reference'),
    meta(content='GraphicalLogAnalyzerInputFile.txt',name='reference'),
    meta(content='GraphicalLogAnalyzerReadme.txt',name='reference'),
    meta(content='Some values used from CreateVrmlFromString sample by Vincent Gardet (modified by Curt Blais). Also see vrmlcity CreateVrmlFromString tutorial.',name='reference'),
    meta(content='../course/CreateVrmlFromStringRandomBoxes.wrl',name='reference'),
    meta(content='../course/CreateVrmlFromStringRandomBoxes.x3d',name='reference'),
    meta(content='../course/CreateVrmlFromStringRandomBoxes.html',name='reference'),
    meta(content='http://www.gardet.nom.fr/vrmlcity/tut_cvfs.htm',name='reference'),
    meta(content='http://www.parallelgraphics.com/developer/products/cortona/eai',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/ExternalAuthoringInterface/GraphicalLogAnalyzer.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='GraphicalLogAnalyzer.x3d'),
    NavigationInfo(headlight=False,speed=5),
    Background(skyAngle=[1.1,1.57],skyColor=[(.3,.3,1),(.4,.4,1),(.7,.7,.9)]),
    DirectionalLight(direction=(0,-.5,-1)),
    DirectionalLight(direction=(-1,-.5,.5),intensity=.7),
    DirectionalLight(direction=(1,-.5,.5),intensity=.7),
    Viewpoint(description='Entry',position=(0,1.2,5)),
    Viewpoint(description='Overview',orientation=(1,0,0,-.37),position=(0,5,4)),
    Viewpoint(description='Down',orientation=(1,0,0,-1.57),position=(0,8,-2)),
    Transform(translation=(0,0,-490),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=.25,diffuseColor=(.14,.14,.16),shininess=.072,specularColor=(.39,.46,.52),transparency=.1)),
        geometry=Box(size=(10,0.01,1000)))]),
    Group(
      children=[
      Transform(DEF='ROOT')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GraphicalLogAnalyzer.py")
