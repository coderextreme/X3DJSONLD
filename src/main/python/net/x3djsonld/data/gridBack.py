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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='gridBack.x3d',name='title'),
    meta(content='Checkerboard grid background for X3D/VRML materials selection.',name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='8 April 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.json',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(ambientIntensity=0.01,diffuseColor=(1.0,1.0,1.0),shininess=0.05)),
      geometry=IndexedFaceSet(colorIndex=[0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0],colorPerVertex=False,coordIndex=[0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1],normalPerVertex=False,
        coord=Coordinate(point=[(-5.25,5.25,0.0),(-3.75,5.25,0.0),(-2.25,5.25,0.0),(-0.75,5.25,0.0),(0.75,5.25,0.0),(2.25,5.25,0.0),(3.75,5.25,0.0),(5.25,5.25,0.0),(-5.25,3.75,0.0),(-3.75,3.75,0.0),(-2.25,3.75,0.0),(-0.75,3.75,0.0),(0.75,3.75,0.0),(2.25,3.75,0.0),(3.75,3.75,0.0),(5.25,3.75,0.0),(-5.25,2.25,0.0),(-3.75,2.25,0.0),(-2.25,2.25,0.0),(-0.75,2.25,0.0),(0.75,2.25,0.0),(2.25,2.25,0.0),(3.75,2.25,0.0),(5.25,2.25,0.0),(-5.25,0.75,0.0),(-3.75,0.75,0.0),(-2.25,0.75,0.0),(-0.75,0.75,0.0),(0.75,0.75,0.0),(2.25,0.75,0.0),(3.75,0.75,0.0),(5.25,0.75,0.0),(-5.25,-0.75,0.0),(-3.75,-0.75,0.0),(-2.25,-0.75,0.0),(-0.75,-0.75,0.0),(0.75,-0.75,0.0),(2.25,-0.75,0.0),(3.75,-0.75,0.0),(5.25,-0.75,0.0),(-5.25,-2.25,0.0),(-3.75,-2.25,0.0),(-2.25,-2.25,0.0),(-0.75,-2.25,0.0),(0.75,-2.25,0.0),(2.25,-2.25,0.0),(3.75,-2.25,0.0),(5.25,-2.25,0.0),(-5.25,-3.75,0.0),(-3.75,-3.75,0.0),(-2.25,-3.75,0.0),(-0.75,-3.75,0.0),(0.75,-3.75,0.0),(2.25,-3.75,0.0),(3.75,-3.75,0.0),(5.25,-3.75,0.0),(-5.25,-5.25,0.0),(-3.75,-5.25,0.0),(-2.25,-5.25,0.0),(-0.75,-5.25,0.0),(0.75,-5.25,0.0),(2.25,-5.25,0.0),(3.75,-5.25,0.0),(5.25,-5.25,0.0)]),
        color=Color(color=[(0.5,0.5,0.5),(0.75,0.75,0.75)])))])
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
    print("Python-to-VRML export of VRML output successful (still testing)")
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

print("python x3d.py load and self-test complete for gridBack.py")
