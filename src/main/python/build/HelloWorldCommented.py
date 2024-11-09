####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HelloWorldCommented.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='HelloWorldCommented.x3d',name='title'),
    meta(content='Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.',name='description'),
    meta(content='19 December 2015',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.',name='info'),
    meta(content='HelloWorldCommented.json',name='reference'),
    meta(content='HelloWorldCommentedOriginalEncoding.json',name='reference'),
    meta(content='HelloWorldCommentedAlternativeEncoding.json',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator')]),
  Scene=Scene(
    #  Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes) 
    #  WorldInfo begin 
    children=[
    WorldInfo(title='Hello world!'),
    #  WorldInfo complete, Group begin 
    Group(
      #  Viewpoint begin 
      children=[
      Viewpoint(DEF='ViewUpClose',centerOfRotation=(0,-1,0),description='Hello world!',position=(0,-1,7)),
      #  Viewpoint complete, Transform begin 
      Transform(rotation=(0,1,0,3),
        #  Shape begin 
        children=[
        Shape(
          #  Sphere begin 
          geometry=Sphere(),
          #  Sphere complete, Appearance begin 
          appearance=Appearance(
            #  Material begin 
            material=Material(DEF='MaterialLightBlue',diffuseColor=(0.1,0.5,1)),
            #  Material complete, ImageTexture begin 
            texture=ImageTexture(DEF='ImageCloudlessEarth',url=["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]),
            #  ImageTexture complete 
            ),
          #  Appearance complete 
          )]
        #  Shape complete 
        ),
      #  Transform complete, Transform begin 
      Transform(translation=(0,-2,0),
        #  Shape begin 
        children=[
        Shape(
          #  Text begin 
          geometry=Text(DEF='TextMessage',string=["Hello","world!"],
            #  FontStyle begin 
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]),
            #  FontStyle complete 
            ),
          #  Text complete, Appearance begin 
          appearance=Appearance(
            #  Material begin 
            material=Material(USE='MaterialLightBlue'),
            #  Material complete 
            ),
          #  Appearance complete 
          )]
        #  Shape complete 
        )]
      #  Transform complete 
      )]
    #  Group complete 
    )
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HelloWorldCommented.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python HelloWorldCommented.py load and self-test diagnostics complete.")
