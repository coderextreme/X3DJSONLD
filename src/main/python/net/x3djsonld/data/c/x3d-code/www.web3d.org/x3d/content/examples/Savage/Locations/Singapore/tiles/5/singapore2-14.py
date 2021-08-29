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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore2-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.229726687955988,103.79091847780627,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[0,1,3,3,2,0,0,0,0,1,1,1,0,0,0,0,0,0,-2,-4,-4,-4,-2,-1,-1,-1,0,0,0,2,4,7,10,11,9,5,2,2,2,2,1,0,0,0,1,2,1,0,0,0,0,0,1,0,-4,-7,-8,-7,-2,0,0,0,0,0,2,4,9,13,13,12,8,4,3,3,2,2,1,1,1,1,2,2,3,2,2,1,1,1,1,0,-2,-5,-7,-6,-1,0,0,0,2,3,4,7,12,14,13,10,6,1,3,3,2,2,2,1,1,1,2,3,4,5,6,5,2,1,1,1,0,0,-3,-3,0,0,0,1,4,6,7,9,12,13,10,7,2,0,5,3,2,2,2,2,1,1,2,3,3,4,5,4,2,1,0,0,0,0,0,0,-1,0,0,2,5,8,10,12,13,13,10,6,2,0,6,4,2,2,2,2,1,1,2,3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,5,9,12,14,14,13,11,8,6,4,5,4,3,2,2,2,3,3,4,3,2,1,0,0,0,0,0,0,0,0,1,1,0,0,0,2,5,10,13,15,14,11,9,7,6,5,4,4,4,3,2,3,4,5,6,6,4,2,1,0,0,0,0,0,1,1,2,2,1,1,2,4,6,9,13,14,12,9,4,1,2,3,3,5,6,4,3,2,4,5,6,6,6,3,1,0,0,0,0,0,1,2,2,2,2,2,2,3,5,8,12,14,13,9,3,0,0,1,1,6,9,7,3,1,0,0,3,4,6,4,0,0,0,0,0,0,1,2,2,2,2,2,1,1,2,6,11,14,14,12,6,2,1,1,0,5,10,8,5,2,-1,0,0,2,6,4,0,0,1,1,0,0,1,2,1,1,2,2,0,0,1,4,9,12,13,13,8,4,2,1,-4,0,5,7,9,6,1,0,-3,0,4,3,0,0,1,2,0,0,1,1,1,1,1,1,0,-1,0,2,5,7,8,8,6,4,2,1,-7,-3,0,5,10,7,4,0,-6,-2,1,1,0,0,2,2,1,0,0,0,0,0,1,1,0,0,0,1,2,3,4,5,6,5,3,2,-7,-6,-4,0,5,5,5,0,-4,-2,0,0,1,1,3,3,2,0,0,0,0,0,1,1,0,0,1,2,2,2,2,4,6,7,6,4,-7,-7,-6,-2,1,3,4,1,-2,-2,0,0,0,2,3,3,2,0,0,0,0,0,0,0,0,0,1,2,2,2,1,2,8,12,9,7,-8,-7,-5,-2,0,0,0,0,0,0,0,0,0,1,2,2,1,0,0,0,0,1,0,0,0,0,0,1,2,1,0,2,12,19,14,10,-9,-7,-4,-2,0,0,0,0,1,0,0,0,0,1,2,2,0,0,0,0,0,0,0,-1,-2,-2,0,1,2,1,0,2,15,23,17,12,-12,-9,-5,-2,0,0,0,0,2,1,0,0,0,1,3,2,0,0,0,0,0,0,0,0,0,0,1,2,2,1,1,3,13,20,15,11,-13,-10,-6,-3,-1,0,0,0,3,2,0,0,0,1,3,3,1,0,0,0,0,0,0,0,0,2,2,2,2,1,1,3,11,16,13,10,-8,-8,-7,-6,-5,-3,-1,0,2,2,2,1,1,1,3,3,1,0,0,0,0,0,0,0,1,2,0,-1,-2,-1,0,2,7,10,10,8,-4,-5,-7,-8,-7,-5,-1,0,1,2,3,3,1,1,3,3,1,0,0,0,0,1,2,2,3,1,-2,-5,-5,-3,0,2,3,4,6,7,-2,-7,-11,-8,-4,-3,-2,0,0,1,2,2,2,2,5,6,5,3,1,1,2,2,1,1,3,2,0,-2,-2,-1,0,2,3,4,4,4],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
