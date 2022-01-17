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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='CloudsProcedural4.x3d',name='title'),
    meta(content='X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes.',name='description'),
    meta(content='Capt Darren W. Murphy',name='creator'),
    meta(content='1 November 2007',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d',name='identifier'),
    meta(content='X3D-Edit, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license'),
    meta(content='fix links',name='TODO')]),
  Scene=Scene(
    #  A png image file for the cloud texture must be designated in the ecmascript node. 
    children=[
    Viewpoint(description='Main',jump=False,orientation=(0,1,0,1.57),position=(50000,1000,42000)),
    Viewpoint(description='Light House Tower',jump=False,orientation=(0,1,0,1.3),position=(45000,1290,44000)),
    Viewpoint(description='centerWest',jump=False,orientation=(0,1,0,2.5),position=(48000,1000,20000)),
    Background(groundColor=[(0,0,1)],skyColor=[(0,0,1)]),
    DirectionalLight(ambientIntensity=1,direction=(-1,0,0),global_=True),
    Group(DEF='Terrain',
      children=[
      Transform(scale=(50,50,50),translation=(25000,0,25000),
        children=[
        Inline(url=["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"])]),
      Transform(rotation=(1,0,0,1.57),translation=(25000,0,25000),
        children=[
        Shape(
          geometry=Rectangle2D(size=(77000,55000)),
          appearance=Appearance(
            texture=ImageTexture(url=["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])))])]),
    Group(DEF='Placemarks',
      children=[
      Transform(scale=(50,50,50),translation=(45000,30,44000),
        children=[
        Inline(url=["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"])])]),
    Group(DEF='Clouds',
      children=[
      Transform(DEF='Cumulus'),
      Transform(DEF='Cirrus'),
      Transform(DEF='Fog'),
      Script(DEF='PixelScript',directOutput=True,
        field=[
        field(accessType='initializeOnly',name='Cumulus',type='SFNode',
          children=[
          Transform(USE='Cumulus')]),
        field(accessType='initializeOnly',name='Cirrus',type='SFNode',
          children=[
          Transform(USE='Cirrus')]),
        field(accessType='initializeOnly',name='Fog',type='SFNode')]
*** TODO x3d.py and X3dToPython.xslt need to handle embedded CDATA source code for Script
),
      DirectionalLight(ambientIntensity=1,color=(1,0,0),direction=(-1,-1,0),global_=True)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for CloudsProcedural4.py")
