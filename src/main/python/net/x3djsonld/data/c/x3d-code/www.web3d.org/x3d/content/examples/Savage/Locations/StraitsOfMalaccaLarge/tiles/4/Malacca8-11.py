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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca8-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819594,103.92975052808853,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[0,0,3,2,1,4,5,4,10,20,23,1,2,6,1,0,2,4,5,5,4,3,0,0,1,0,2,3,2,1,4,26,7,0,0,0,0,0,0,2,2,4,2,2,2,2,0,0,0,2,4,5,7,3,7,4,1,8,0,0,0,0,0,5,5,4,0,4,4,2,2,0,2,3,10,4,2,10,11,-2,0,0,3,0,-2,3,5,5,2,0,0,2,0,1,1,0,3,6,3,4,8,7,7,0,0,0,3,4,3,2,6,5,3,0,2,3,-2,0,0,2,6,4,10,7,1,-1,0,1,1,2,3,5,2,5,5,2,2,0,0,1,5,1,1,4,4,5,3,-1,0,2,2,2,3,3,6,2,4,6,4,4,0,50,4,1,0,-4,6,-1,2,0,0,0,1,0,1,1,6,6,3,2,4,6,3,3,0,-1,0,-2,-2,9,0,-19,1,1,0,0,0,1,1,6,6,6,2,2,65,12,10,-1,0,-5,0,0,1,1,9,1,1,1,0,0,16,5,4,6,6,2,2,2,0,-1,-3,0,3,0,0,2,3,2,2,2,2,0,5,2,4,5,4,15,18,32,1,0,-2,4,16,14,2,11,2,1,1,1,1,1,6,5,5,0,9,5,10,4,2,0,-1,10,16,14,7,3,2,3,1,2,0,2,15,19,7,13,4,8,0,-4,-7,-1,-2,34,16,20,5,3,4,3,0,3,2,2,8,6,4,25,9,2,1,1,7,16,0,14,4,56,3,2,3,4,15,1,2,2,-19,19,57,4,22,10,15,14,6,4,4,4,6,23,58,3,3,3,2,4,4,3,12,30,46,19,37,8,8,39,8,18,41,5,19,31,29,1,3,4,4,4,3,4,4,3,24,2,17,8,13,10,14,31,12,15,13,14,2,1,2,3,3,3,3,3,7,10,10,10,8,6,9,13,7,8,1,2,3,2,2,1,1,3,2,4,3,3,2,7,14,20,-6,3,14,14,10,3,3,1,2,1,2,2,3,2,2,2,3,4,10,12,6,1,6,5,13,11,17,3,4,3,2,1,1,2,3,2,1,1,4,3,9,16,7,2,6,-2,14,10,12,4,5,3,2,3,1,3,3,3,1,1,3,3],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
