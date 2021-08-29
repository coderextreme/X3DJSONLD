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
    meta(content='SriCampus024.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus024.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus024.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Cylinder-4',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[24,23,22,21,20,19,18,17,16,15,14,13,-1,12,24,13,1,-1,11,23,24,12,-1,10,22,23,11,-1,9,21,22,10,-1,8,20,21,9,-1,7,19,20,8,-1,6,18,19,7,-1,5,17,18,6,-1,4,16,17,5,-1,3,15,16,4,-1,2,14,15,3,-1,1,13,14,2,-1,1,2,3,4,5,6,7,8,9,10,11,12,-1],creaseAngle=4.0,solid=False,
        coord=Coordinate(DEF='OBJECT-24-VERTICES',point=[(0.0,9.989509,0.0),(4.145294,9.989509,0.0),(3.58993,9.989509,-1.4911776),(2.072647,9.989509,-2.5827954),(2.5382605E-16,9.989509,-2.982355),(-2.072647,9.989509,-2.5827954),(-3.58993,9.989509,-1.4911776),(-4.145294,9.989509,-3.6523317E-16),(-3.58993,9.989509,1.4911776),(-2.072647,9.989509,2.5827954),(-7.6147817E-16,9.989509,2.982355),(2.072647,9.989509,2.5827954),(3.58993,9.989509,1.4911776),(4.145294,-9.989509,0.0),(3.58993,-9.989509,-1.4911776),(2.072647,-9.989509,-2.5827954),(2.5382605E-16,-9.989509,-2.982355),(-2.072647,-9.989509,-2.5827954),(-3.58993,-9.989509,-1.4911776),(-4.145294,-9.989509,-3.6523317E-16),(-3.58993,-9.989509,1.4911776),(-2.072647,-9.989509,2.5827954),(-7.6147817E-16,-9.989509,2.982355),(2.072647,-9.989509,2.5827954),(3.58993,-9.989509,1.4911776),(0.0,-9.989509,0.0)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus024.py")
