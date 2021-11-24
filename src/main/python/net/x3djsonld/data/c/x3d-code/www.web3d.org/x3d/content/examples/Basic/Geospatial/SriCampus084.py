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
    meta(content='SriCampus084.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus084.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus084.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-1',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[22,23,1,0,-1,20,21,23,22,-1,18,19,21,20,-1,16,17,19,18,-1,14,15,17,16,-1,12,13,15,14,-1,10,11,13,12,-1,8,9,11,10,-1,6,7,9,8,-1,4,5,7,6,-1,2,3,5,4,-1,0,1,3,2,-1,23,21,19,17,15,13,11,9,7,5,3,1,-1,0,2,4,6,8,10,12,14,16,18,20,22,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-84-VERTICES',point=[(0.0,0.0,0.0),(0.0,-19.185282,0.0),(39.48961,-0.009602958,25.27011),(39.48961,-19.185282,25.27011),(4.118791,-0.009602958,82.995636),(4.118791,-19.185282,82.995636),(-2.8337252,-0.009602958,78.492256),(-2.8337252,-19.185282,78.492256),(-12.33182,-0.009602958,94.01302),(-12.33182,-19.185282,94.01302),(57.142956,-0.009602958,138.72198),(57.142956,-19.185282,138.72198),(66.697876,-0.009602958,123.04895),(66.697876,-19.185282,123.04895),(19.938276,-0.009602958,93.16426),(19.938276,-19.185282,93.16426),(55.416702,-0.009602958,35.203),(55.416702,-19.185282,35.203),(62.583485,-0.009602958,39.806126),(62.583485,-19.185282,39.806126),(72.2735,-0.009602958,24.287418),(72.2735,-19.185282,24.287418),(9.762531,-0.009602958,-14.5450325),(9.762531,-19.185282,-14.5450325)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus084.py")
