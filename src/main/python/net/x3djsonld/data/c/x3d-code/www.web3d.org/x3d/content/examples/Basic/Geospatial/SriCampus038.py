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
    meta(content='SriCampus038.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus038.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus038.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-32',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,-1,22,20,18,16,14,12,10,8,6,4,2,0,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-38-VERTICES',point=[(0.0,0.0,0.0),(0.0,-9.484278,0.0),(3.3223958,0.0018668034,2.212849),(3.3223958,-9.484278,2.212849),(4.432964,0.0018668034,0.32619318),(4.432964,-9.484278,0.32619318),(21.44774,0.0018668034,10.711402),(21.44774,-9.484278,10.711402),(-4.010508,0.0018668034,52.605297),(-4.010508,-9.484278,52.605297),(-0.33522218,0.0018668034,54.886795),(-0.33522218,-9.484278,54.886795),(-3.8217719,0.0018668034,60.43055),(-3.8217719,-9.484278,60.43055),(-7.514823,0.0018668034,58.197594),(-7.514823,-9.484278,58.197594),(-8.589095,0.0018668034,60.43538),(-8.589095,-9.484278,60.43538),(-25.792877,0.0018668034,49.57786),(-25.792877,-9.484278,49.57786),(0.18562403,0.0018668034,8.225281),(0.18562403,-9.484278,8.225281),(-3.6218371,0.0018668034,5.8302464),(-3.6218371,-9.484278,5.8302464)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus038.py")
