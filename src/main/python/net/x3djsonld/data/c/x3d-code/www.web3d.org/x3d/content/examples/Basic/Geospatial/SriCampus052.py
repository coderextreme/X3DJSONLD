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
    meta(content='SriCampus052.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus052.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus052.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='House-91',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[10,11,13,-1,9,12,8,-1,9,10,13,12,-1,8,12,13,11,-1,10,2,3,11,-1,8,0,1,9,-1,2,10,9,1,-1,0,8,11,3,-1,0,3,2,1,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-52-VERTICES',point=[(-9.676358,-6.965627,23.128222),(9.676358,-6.965627,23.128222),(9.676358,-6.965627,-23.128222),(-9.676358,-6.965627,-23.128222),(-9.676358,1.4501029,23.128222),(9.676358,1.4501029,23.128222),(9.676358,1.4501029,-23.128222),(-9.676358,1.4501029,-23.128222),(-9.676358,1.4501029,23.128222),(9.676358,1.4501029,23.128222),(9.676358,1.4501029,-23.128222),(-9.676358,1.4501029,-23.128222),(0.0,6.965627,13.451863),(0.0,6.965627,-13.451863)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus052.py")
