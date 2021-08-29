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
        texture=ImageTexture(url=['../../images/5/singapore23-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4130926478938615,103.97763792148352,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,7,9,10,12,11,10,9,8,7,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,8,11,12,11,11,9,8,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,7,9,10,12,11,10,9,8,7,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,8,11,12,11,11,9,8,6,6,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,7,8,10,12,11,10,9,8,7,6,6,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,8,11,12,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,7,8,10,12,11,10,9,8,7,6,6,6,6,6,6,6,6,6,6,6,6,7,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,8,11,12,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,8,5,5,5,5,5,5,5,5,5,5,5,5,6,7,8,10,12,11,10,9,8,7,6,6,6,6,6,6,6,6,6,6,6,6,7,7,9,5,5,5,5,5,5,5,5,5,5,5,6,6,9,11,11,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,8,9,11,5,5,5,5,5,5,5,5,5,5,5,7,8,10,11,11,10,9,8,7,6,6,6,6,6,6,6,6,6,6,6,6,7,7,9,11,12,5,5,5,5,5,5,5,5,5,6,6,8,11,11,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,8,9,11,12,12,5,5,5,5,5,5,5,5,5,7,8,10,11,11,10,9,8,7,6,6,6,6,6,6,6,6,6,6,6,6,7,7,9,11,12,13,11,5,5,5,5,5,5,5,6,6,8,11,12,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,8,9,11,12,12,12,8,5,5,5,5,5,5,5,7,8,10,11,11,11,9,8,7,6,6,6,6,6,6,6,6,6,6,6,6,7,7,9,11,12,12,11,10,6,5,5,5,5,5,6,6,9,11,12,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,7,8,9,11,12,12,11,8,5,3,5,5,5,5,5,7,8,10,12,11,11,9,8,7,6,6,6,6,6,6,6,6,6,6,6,6,7,7,9,11,12,12,11,9,5,2,1,5,5,5,6,6,9,11,12,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,7,8,9,11,12,12,11,8,5,3,0,0,5,5,5,7,8,10,12,11,11,9,8,7,6,6,6,6,6,6,6,6,6,6,6,6,6,8,9,11,12,12,11,9,5,2,1,0,0,5,6,6,9,11,12,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,7,8,9,11,12,12,11,8,5,3,0,0,0,0,5,7,8,10,12,11,11,9,8,7,6,6,6,6,6,6,6,6,6,6,6,6,6,7,9,11,12,12,11,9,6,2,1,0,0,0,0,6,9,11,12,11,10,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,7,8,9,11,12,12,11,8,5,3,0,0,0,0,0,0,8,10,12,11,11,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,9,11,12,12,11,9,5,2,0,0,0,0,0,0,0],
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
