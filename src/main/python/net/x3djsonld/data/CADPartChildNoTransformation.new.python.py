####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python CADPartChildNoTransformation.py
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

newModel=X3D(profile='CADInterchange',version='3.1',
  head=head(
    children=[
    component(name='CADGeometry',level=2),
    component(name='EnvironmentalEffects',level=1),
    meta(content='CADPartChildNoTransformation.x3d',name='title'),
    meta(content='Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.',name='description'),
    meta(content='Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk',name='creator'),
    meta(content='Vince Marchetti bushing generation using python scripts',name='translator'),
    meta(content='https://www.web3d.org/member-only/mantis/view.php?id=528',name='reference'),
    meta(content='This scene is intended for specification development only.',name='warning'),
    meta(content='29 June 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CADPartChildNoTransformation.x3d'),
    Background(skyColor=[(0.9607843,1,0.9607843)]),
    Viewpoint(description='Hello CAD bushing',orientation=(1,0,0,-0.321751),position=(0,5,15)),
    CADAssembly(name='DesignPatternAssembly',
      children=[
      CADPart(name='CADPartExample',
        children=[
        CADFace(name='outerSurface',
          shape=Shape(
            appearance=Appearance(DEF='AppearanceGrey',
              material=Material(),),
            geometry=Cylinder(bottom=False,height=3.0,radius=2.0,top=False))),
        CADFace(name='innerSurface',
          shape=Shape(
            appearance=Appearance(USE='AppearanceGrey'),
            geometry=Cylinder(bottom=False,height=3.0,solid=False,top=False))),
        CADFace(name='topCap',
          shape=Shape(
            appearance=Appearance(USE='AppearanceGrey'),
            geometry=IndexedTriangleSet(index=[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65],ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(2,1.5,0),(1,1.5,0),(1.9616,1.5,0.3902),(0.9808,1.5,0.1951),(1.8478,1.5,0.7654),(0.9239,1.5,0.3827),(1.6629,1.5,1.1111),(0.8315,1.5,0.5556),(1.4142,1.5,1.4142),(0.7071,1.5,0.7071),(1.1111,1.5,1.6629),(0.5556,1.5,0.8315),(0.7654,1.5,1.8478),(0.3827,1.5,0.9239),(0.3902,1.5,1.9616),(0.1951,1.5,0.9808),(0,1.5,2),(0,1.5,1),(-0.3902,1.5,1.9616),(-0.1951,1.5,0.9808),(-0.7654,1.5,1.8478),(-0.3827,1.5,0.9239),(-1.1111,1.5,1.6629),(-0.5556,1.5,0.8315),(-1.4142,1.5,1.4142),(-0.7071,1.5,0.7071),(-1.6629,1.5,1.1111),(-0.8315,1.5,0.5556),(-1.8478,1.5,0.7654),(-0.9239,1.5,0.3827),(-1.9616,1.5,0.3902),(-0.9808,1.5,0.1951),(-2,1.5,0),(-1,1.5,0),(-1.9616,1.5,-0.3902),(-0.9808,1.5,-0.1951),(-1.8478,1.5,-0.7654),(-0.9239,1.5,-0.3827),(-1.6629,1.5,-1.1111),(-0.8315,1.5,-0.5556),(-1.4142,1.5,-1.4142),(-0.7071,1.5,-0.7071),(-1.1111,1.5,-1.6629),(-0.5556,1.5,-0.8315),(-0.7654,1.5,-1.8478),(-0.3827,1.5,-0.9239),(-0.3902,1.5,-1.9616),(-0.1951,1.5,-0.9808),(0,1.5,-2),(0,1.5,-1),(0.3902,1.5,-1.9616),(0.1951,1.5,-0.9808),(0.7654,1.5,-1.8478),(0.3827,1.5,-0.9239),(1.1111,1.5,-1.6629),(0.5556,1.5,-0.8315),(1.4142,1.5,-1.4142),(0.7071,1.5,-0.7071),(1.6629,1.5,-1.1111),(0.8315,1.5,-0.5556),(1.8478,1.5,-0.7654),(0.9239,1.5,-0.3827),(1.9616,1.5,-0.3902),(0.9808,1.5,-0.1951),(2,1.5,0),(1,1.5,0)])))),
        CADFace(name='bottomCap',
          shape=Shape(
            appearance=Appearance(USE='AppearanceGrey'),
            geometry=IndexedTriangleSet(index=[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65],ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(2,-1.5,0),(1,-1.5,0),(1.9616,-1.5,-0.3902),(0.9808,-1.5,-0.1951),(1.8478,-1.5,-0.7654),(0.9239,-1.5,-0.3827),(1.6629,-1.5,-1.1111),(0.8315,-1.5,-0.5556),(1.4142,-1.5,-1.4142),(0.7071,-1.5,-0.7071),(1.1111,-1.5,-1.6629),(0.5556,-1.5,-0.8315),(0.7654,-1.5,-1.8478),(0.3827,-1.5,-0.9239),(0.3902,-1.5,-1.9616),(0.1951,-1.5,-0.9808),(0,-1.5,-2),(0,-1.5,-1),(-0.3902,-1.5,-1.9616),(-0.1951,-1.5,-0.9808),(-0.7654,-1.5,-1.8478),(-0.3827,-1.5,-0.9239),(-1.1111,-1.5,-1.6629),(-0.5556,-1.5,-0.8315),(-1.4142,-1.5,-1.4142),(-0.7071,-1.5,-0.7071),(-1.6629,-1.5,-1.1111),(-0.8315,-1.5,-0.5556),(-1.8478,-1.5,-0.7654),(-0.9239,-1.5,-0.3827),(-1.9616,-1.5,-0.3902),(-0.9808,-1.5,-0.1951),(-2,-1.5,0),(-1,-1.5,0),(-1.9616,-1.5,0.3902),(-0.9808,-1.5,0.1951),(-1.8478,-1.5,0.7654),(-0.9239,-1.5,0.3827),(-1.6629,-1.5,1.1111),(-0.8315,-1.5,0.5556),(-1.4142,-1.5,1.4142),(-0.7071,-1.5,0.7071),(-1.1111,-1.5,1.6629),(-0.5556,-1.5,0.8315),(-0.7654,-1.5,1.8478),(-0.3827,-1.5,0.9239),(-0.3902,-1.5,1.9616),(-0.1951,-1.5,0.9808),(0,-1.5,2),(0,-1.5,1),(0.3902,-1.5,1.9616),(0.1951,-1.5,0.9808),(0.7654,-1.5,1.8478),(0.3827,-1.5,0.9239),(1.1111,-1.5,1.6629),(0.5556,-1.5,0.8315),(1.4142,-1.5,1.4142),(0.7071,-1.5,0.7071),(1.6629,-1.5,1.1111),(0.8315,-1.5,0.5556),(1.8478,-1.5,0.7654),(0.9239,-1.5,0.3827),(1.9616,-1.5,0.3902),(0.9808,-1.5,0.1951),(2,-1.5,0),(1,-1.5,0)]))))])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for CADPartChildNoTransformation.py:')
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

print("python CADPartChildNoTransformation.py load and self-test diagnostics complete.")