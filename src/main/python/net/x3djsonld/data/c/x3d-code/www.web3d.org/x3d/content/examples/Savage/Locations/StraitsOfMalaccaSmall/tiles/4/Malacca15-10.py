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
        texture=ImageTexture(url=['../../images/4/Malacca15-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.297423545807372,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[54,6,13,29,12,13,11,8,7,3,5,19,6,4,6,4,5,4,4,5,4,6,22,27,15,33,16,11,17,9,6,3,2,7,6,5,3,4,4,2,5,5,6,5,9,13,13,28,6,4,5,14,5,4,6,4,3,4,5,2,4,5,5,5,4,7,10,24,23,16,6,8,7,10,5,8,8,3,5,6,5,4,5,4,6,5,8,6,29,148,22,10,16,6,6,4,0,22,8,5,4,5,6,5,6,4,4,4,3,5,29,77,35,17,19,2,12,7,2,4,4,6,6,5,5,5,5,5,3,7,3,2,27,137,23,24,285,10,9,10,2,4,4,6,5,5,5,6,6,6,6,4,3,4,25,65,24,137,118,7,2,5,8,2,4,4,4,4,3,5,3,4,5,5,6,4,22,84,31,52,29,4,6,6,6,4,3,1,4,5,4,5,5,4,7,5,7,5,72,72,14,30,43,5,9,10,4,5,4,3,3,3,4,4,5,4,6,4,6,2,75,20,28,184,36,7,11,3,5,4,3,3,4,4,2,4,4,4,5,5,7,6,62,35,149,193,16,9,3,4,4,2,4,5,4,4,3,5,2,4,2,3,4,8,37,26,91,19,6,7,4,3,5,4,4,4,4,4,2,5,6,1,4,5,7,5,20,9,6,5,15,7,6,4,4,3,3,4,2,3,4,4,3,4,4,5,6,4,9,13,12,9,7,4,5,5,5,3,5,3,5,3,4,3,3,4,2,5,4,4,18,10,8,6,4,6,6,5,5,4,6,5,3,3,3,4,3,6,3,4,5,2,9,11,7,6,4,4,5,5,5,5,5,4,5,5,4,4,4,3,5,4,5,4,11,8,6,5,7,6,7,5,4,8,6,5,6,6,4,4,3,5,5,3,4,4,9,7,6,7,6,6,4,3,4,6,6,4,5,5,5,5,5,4,8,4,7,4,5,6,5,5,6,7,6,6,5,4,4,6,5,5,4,7,6,5,5,4,4,5,5,5,5,5,6,5,7,5,6,5,6,3,6,4,6,6,6,2,6,5,5,4,7,7,6,5,5,3,5,6,6,5,5,4,6,6,6,6,6,4,3,5,6,3,7,6,6,7,5,3,5,6,6,7,5,4,6,6,6,6,4,8,5,4,6,3],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
