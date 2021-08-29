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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='SriCampus129.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus129.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Superellipse-39',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[60,61,49,-1,59,61,60,-1,58,61,59,-1,57,61,58,-1,56,61,57,-1,55,61,56,-1,54,61,55,-1,53,61,54,-1,52,61,53,-1,51,61,52,-1,50,61,51,-1,49,61,50,-1,48,60,49,37,-1,47,59,60,48,-1,46,58,59,47,-1,45,57,58,46,-1,44,56,57,45,-1,43,55,56,44,-1,42,54,55,43,-1,41,53,54,42,-1,40,52,53,41,-1,39,51,52,40,-1,38,50,51,39,-1,37,49,50,38,-1,36,48,37,25,-1,35,47,48,36,-1,34,46,47,35,-1,33,45,46,34,-1,32,44,45,33,-1,31,43,44,32,-1,30,42,43,31,-1,29,41,42,30,-1,28,40,41,29,-1,27,39,40,28,-1,26,38,39,27,-1,25,37,38,26,-1,24,36,25,13,-1,23,35,36,24,-1,22,34,35,23,-1,21,33,34,22,-1,20,32,33,21,-1,19,31,32,20,-1,18,30,31,19,-1,17,29,30,18,-1,16,28,29,17,-1,15,27,28,16,-1,14,26,27,15,-1,13,25,26,14,-1,12,24,13,1,-1,11,23,24,12,-1,10,22,23,11,-1,9,21,22,10,-1,8,20,21,9,-1,7,19,20,8,-1,6,18,19,7,-1,5,17,18,6,-1,4,16,17,5,-1,3,15,16,4,-1,2,14,15,3,-1,1,13,14,2,-1,0,12,1,-1,0,11,12,-1,0,10,11,-1,0,9,10,-1,0,8,9,-1,0,7,8,-1,0,6,7,-1,0,5,6,-1,0,4,5,-1,0,3,4,-1,0,2,3,-1,0,1,2,-1],creaseAngle=4.0,solid=False,
        coord=Coordinate(DEF='OBJECT-129-VERTICES',point=[(0.0,1.798667,0.0),(0.8993335,1.5576913,0.0),(0.77884567,1.5576913,-0.44966674),(0.44966674,1.5576913,-0.77884567),(5.5068295E-17,1.5576913,-0.8993335),(-0.44966674,1.5576913,-0.77884567),(-0.77884567,1.5576913,-0.44966674),(-0.8993335,1.5576913,-1.1013659E-16),(-0.77884567,1.5576913,0.44966674),(-0.44966674,1.5576913,0.77884567),(-1.6520488E-16,1.5576913,0.8993335),(0.44966674,1.5576913,0.77884567),(0.77884567,1.5576913,0.44966674),(1.5576913,0.8993335,0.0),(1.3490002,0.8993335,-0.77884567),(0.77884567,0.8993335,-1.3490002),(9.5381085E-17,0.8993335,-1.5576913),(-0.77884567,0.8993335,-1.3490002),(-1.3490002,0.8993335,-0.77884567),(-1.5576913,0.8993335,-1.9076217E-16),(-1.3490002,0.8993335,0.77884567),(-0.77884567,0.8993335,1.3490002),(-2.8614324E-16,0.8993335,1.5576913),(0.77884567,0.8993335,1.3490002),(1.3490002,0.8993335,0.77884567),(1.798667,0.0,0.0),(1.5576913,0.0,-0.8993335),(0.8993335,0.0,-1.5576913),(1.1013659E-16,0.0,-1.798667),(-0.8993335,0.0,-1.5576913),(-1.5576913,0.0,-0.8993335),(-1.798667,0.0,-2.2027318E-16),(-1.5576913,0.0,0.8993335),(-0.8993335,0.0,1.5576913),(-3.3040977E-16,0.0,1.798667),(0.8993335,0.0,1.5576913),(1.5576913,0.0,0.8993335),(1.5576913,-0.8993335,0.0),(1.3490002,-0.8993335,-0.77884567),(0.77884567,-0.8993335,-1.3490002),(9.5381085E-17,-0.8993335,-1.5576913),(-0.77884567,-0.8993335,-1.3490002),(-1.3490002,-0.8993335,-0.77884567),(-1.5576913,-0.8993335,-1.9076217E-16),(-1.3490002,-0.8993335,0.77884567),(-0.77884567,-0.8993335,1.3490002),(-2.8614324E-16,-0.8993335,1.5576913),(0.77884567,-0.8993335,1.3490002),(1.3490002,-0.8993335,0.77884567),(0.8993335,-1.5576913,0.0),(0.77884567,-1.5576913,-0.44966674),(0.44966674,-1.5576913,-0.77884567),(5.5068295E-17,-1.5576913,-0.8993335),(-0.44966674,-1.5576913,-0.77884567),(-0.77884567,-1.5576913,-0.44966674),(-0.8993335,-1.5576913,-1.1013659E-16),(-0.77884567,-1.5576913,0.44966674),(-0.44966674,-1.5576913,0.77884567),(-1.6520488E-16,-1.5576913,0.8993335),(0.44966674,-1.5576913,0.77884567),(0.77884567,-1.5576913,0.44966674),(0.0,-1.798667,0.0)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus129.py")
