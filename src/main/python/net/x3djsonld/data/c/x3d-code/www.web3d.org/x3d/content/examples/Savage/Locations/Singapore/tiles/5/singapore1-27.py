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
        texture=ImageTexture(url=['../../images/5/singapore1-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.220994975577994,103.97763792148352,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,6,6,8,9,8,7,9,12,10,7,8,9,9,8,6,2,0,-1,-1,0,4,11,16,20,19,13,8,7,6,7,7,1,-1,2,5,6,7,6,6,8,9,9,10,11,13,11,7,7,8,9,9,7,4,1,-1,-2,-2,1,9,16,24,24,15,9,7,5,5,4,0,-2,2,7,6,9,7,6,7,8,9,9,9,8,7,6,6,6,7,7,8,8,5,1,0,2,5,10,15,22,23,15,10,8,6,6,5,1,0,5,9,7,11,8,6,6,7,8,9,6,4,4,5,4,4,6,7,9,10,8,5,4,7,8,10,13,19,20,15,10,8,7,6,5,4,3,8,10,7,9,7,6,6,6,8,9,7,4,4,4,4,4,6,8,9,8,8,8,7,8,8,8,9,13,13,11,9,9,8,7,6,6,6,9,10,6,7,6,5,5,6,7,9,7,5,4,4,4,4,6,9,9,8,8,10,10,8,7,6,6,7,7,8,9,10,9,7,6,6,7,9,10,6,4,4,5,5,4,6,7,7,7,6,6,4,3,6,10,10,8,9,12,11,8,6,4,4,5,6,7,7,10,9,6,3,3,4,8,12,8,2,4,5,5,4,5,5,6,8,8,8,5,2,6,10,10,8,9,13,12,8,6,4,4,5,6,6,6,9,9,4,1,2,3,8,12,9,1,4,7,7,6,5,4,6,8,8,7,4,1,3,7,6,3,6,11,11,9,7,4,4,6,7,6,4,3,3,5,6,6,5,5,6,6,0,4,9,8,7,5,4,6,7,7,6,3,0,1,4,2,0,3,8,10,9,7,5,5,7,7,7,4,0,-1,5,11,10,7,4,1,3,3,6,9,6,4,3,4,4,5,5,5,3,2,3,5,3,1,3,7,9,9,8,6,6,7,8,9,6,0,-3,2,9,11,12,7,4,6,7,7,8,4,1,2,4,4,5,5,4,5,5,5,6,4,3,4,6,8,9,8,7,6,6,8,10,8,0,-4,0,7,12,16,10,5,9,8,4,2,2,3,4,5,5,5,4,3,5,7,7,6,4,3,4,8,10,10,8,5,4,6,8,11,9,2,-1,0,1,5,7,5,3,5,9,2,-2,0,4,6,6,6,5,4,3,6,9,8,6,4,3,5,9,11,10,8,4,3,6,9,11,10,5,0,0,-1,0,0,0,1,2,6,2,0,4,9,8,7,8,8,7,6,7,10,9,7,5,4,5,7,9,10,8,6,5,8,10,9,10,10,8,4,1,0,0,2,3,3,3,4,4,9,12,9,7,9,12,11,9,9,11,9,7,6,5,5,5,7,9,9,7,7,10,11,9,9,13,15,11,7,4,3,4,5,4,3,4,5,8,11,12,11,14,16,12,8,10,13,10,7,6,6,6,6,7,7,7,7,8,12,13,10,10,12,14,11,7,4,3,5,6,6,4,4,5,7,9,13,16,18,20,14,7,9,14,12,7,5,6,6,7,7,6,6,7,10,13,14,12,11,10,10,9,7,5,3,5,7,8,6,6,6,8,10,12,14,15,16,9,0,3,9,8,3,2,1,3,6,6,5,6,8,10,12,13,12,11,9,8,7,6,5,4,6,7,8,8,7,6,9,10,11,12,11,10,2,-5,-1,3,2,0,-1,-2,0,5,6,4,5,8,9,11,12,12,11,9,6,6,5,5,4,6,7,8,10,7,4,6,7,8,8,8,8,2,-3,-1,1,2,1,0,0,0,6,6,5,5,6,7,9,9,8,7,6,5,4,4,5,5,6,6,7,12,6,1,3,4,4,5,6,7,4,2,1,1,3,4,3,1,3,5,6,6,6,5,6,7,6,4,2,3,4,4,4,5,5,5,6,7,12,6,1,0,0,2,4,6,6,5,4,3,2,3,3,2,0,2,4,6,6,6,4,6,8,8,5,4,4,4,4,4,4,4,5,6,7],
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
