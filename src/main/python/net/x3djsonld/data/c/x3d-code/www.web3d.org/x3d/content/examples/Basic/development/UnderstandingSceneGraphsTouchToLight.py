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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='UnderstandingSceneGraphsTouchToLight.x3d',name='title'),
    meta(content="Put mouse (or pointing device) over ball to turn on light. Demonstration example used in Doctor Dobb's Journal (DDJ) article.",name='description'),
    meta(content='Aaron Walsh, Mantiscorp Development',name='creator'),
    meta(content='aaron@mantiscorp.com(Aaron Walsh)?subject=Understanding Scene Graphs - example feedback',name='reference'),
    meta(content='http://www.mantiscorp.com/people/aew',name='reference'),
    meta(content='9 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.ddj.com',name='reference'),
    meta(content='UnderstandingSceneGraphs.pdf',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/UnderstandingSceneGraphs.pdf',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/UnderstandingSceneGraphsTouchToLight.x3d',name='identifier'),
    meta(content='Don Brutzman, NPS',name='translator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='UnderstandingSceneGraphsTouchToLight.x3d'),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Sphere(),),
      #  define sensor 
      TouchSensor(DEF='TOUCH',description='hold pointing device over geometry to turn on light'),
      #  define light, R G B color 
      DirectionalLight(DEF='LIGHT',color=(1.0,1.0,0.0),on=False),
      ROUTE(fromField='isOver',fromNode='TOUCH',toField='set_on',toNode='LIGHT')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UnderstandingSceneGraphsTouchToLight.py")
