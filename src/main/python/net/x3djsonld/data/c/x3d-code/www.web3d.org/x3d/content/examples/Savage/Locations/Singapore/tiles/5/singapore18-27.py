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
        texture=ImageTexture(url=['../../images/5/singapore18-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3694340860038916,103.97763792148352,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[23,24,24,25,25,28,29,27,25,24,23,21,20,17,15,13,11,9,8,8,9,9,7,6,7,8,8,7,4,3,3,3,2,2,3,4,8,22,24,24,25,26,27,28,25,23,22,22,21,21,19,16,14,12,9,7,7,8,8,7,7,8,7,7,6,5,4,3,3,3,3,4,5,9,22,24,26,27,27,27,26,23,21,21,21,22,22,20,17,15,13,10,7,6,6,7,8,8,7,7,6,6,5,5,3,3,4,5,5,6,9,23,25,27,28,28,28,27,24,20,21,21,22,23,21,19,16,14,11,8,6,6,6,7,7,7,7,7,7,6,5,4,4,5,7,7,7,9,24,26,27,28,29,30,29,26,21,21,22,23,23,21,19,17,16,13,10,7,5,5,6,6,6,6,8,7,6,5,5,5,7,8,8,8,9,23,25,27,27,28,29,29,26,24,23,22,23,23,21,18,16,16,13,10,7,5,5,6,6,6,6,7,7,4,3,4,5,7,8,8,7,8,22,24,25,26,27,27,27,26,26,25,24,22,22,19,15,14,14,12,9,7,6,6,6,6,6,6,6,5,2,2,3,5,7,8,8,7,7,21,22,22,24,25,25,26,27,28,26,25,22,20,17,13,12,12,10,8,7,6,6,6,6,6,6,5,5,3,2,3,5,6,7,7,7,8,21,21,21,22,23,24,25,26,28,26,25,22,18,15,12,10,10,8,7,6,6,6,7,6,6,6,6,6,5,4,5,5,4,5,7,8,8,21,21,22,21,21,22,23,24,25,24,22,19,15,12,10,9,8,7,6,6,6,6,6,6,6,6,6,6,6,5,5,4,4,4,7,9,9,21,23,25,21,19,19,19,20,21,19,17,14,11,9,8,8,8,7,6,6,6,6,6,5,5,5,5,5,6,5,4,3,3,4,7,9,8,21,23,24,21,18,16,16,16,16,14,12,10,8,7,6,6,8,7,6,6,6,6,6,5,4,4,4,4,6,5,3,2,3,3,5,6,5,21,21,22,19,16,14,12,12,11,10,8,7,6,5,4,5,8,7,6,6,6,7,6,5,4,3,2,2,5,5,3,2,3,3,3,2,0,20,20,21,17,14,12,11,10,9,8,6,5,5,5,4,5,8,7,6,6,7,7,6,5,4,3,2,2,4,5,3,2,3,3,2,0,-3,18,19,20,17,14,12,11,10,9,7,6,6,6,6,6,7,8,8,8,8,8,7,7,6,5,4,3,3,3,3,3,3,3,3,2,0,-5,16,18,18,15,12,11,10,10,9,7,6,6,6,7,7,7,7,8,9,11,11,10,9,7,6,5,4,3,2,2,2,2,2,2,2,1,-4,15,15,15,12,10,9,8,8,7,6,6,6,7,7,7,7,7,8,11,14,16,15,12,10,8,7,5,3,3,3,2,1,1,2,3,4,-1,14,13,13,10,8,7,7,7,7,7,7,7,7,8,8,8,7,10,13,16,19,19,15,13,11,8,6,4,4,3,2,1,1,2,5,6,0,12,12,12,10,8,8,8,7,7,7,8,8,8,9,9,9,10,13,16,18,21,21,18,16,13,10,7,4,4,3,3,3,3,3,5,6,2,11,12,12,10,8,8,8,7,7,7,8,9,9,11,11,12,13,15,18,20,22,22,20,17,15,11,7,4,4,3,3,3,3,3,5,5,4,12,12,13,10,8,7,7,6,6,7,7,9,11,13,15,16,17,18,19,21,22,21,19,18,15,12,7,4,3,2,3,3,2,2,3,4,5,11,11,12,10,9,8,8,8,7,7,7,9,12,15,18,19,20,20,21,21,22,22,21,20,16,13,8,4,3,2,3,3,2,2,3,3,5,9,10,10,10,10,11,12,12,11,10,9,11,14,17,20,21,22,22,22,23,24,25,25,24,19,14,9,5,4,4,4,3,3,3,3,3,5],
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
