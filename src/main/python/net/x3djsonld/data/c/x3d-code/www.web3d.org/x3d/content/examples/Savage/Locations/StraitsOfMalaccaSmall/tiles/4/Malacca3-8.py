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
        texture=ImageTexture(url=['../../images/4/Malacca3-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[4,9,24,10,12,24,8,25,14,10,27,25,13,7,7,6,5,10,5,4,3,2,9,5,13,24,26,11,9,15,14,13,20,23,21,16,8,15,13,12,5,3,2,4,12,22,9,10,10,12,10,4,15,12,10,9,24,12,8,7,6,10,5,2,5,3,26,24,16,7,17,12,5,2,9,9,8,10,9,7,8,11,11,1,3,2,4,1,36,23,15,4,4,9,9,5,10,9,11,3,7,8,7,-3,4,3,4,2,1,2,35,27,14,12,6,2,1,4,13,3,1,0,3,4,3,3,3,2,1,4,2,1,23,23,13,6,5,6,3,4,0,3,4,1,3,2,1,1,2,4,5,2,2,4,23,7,3,2,4,3,3,4,0,2,2,5,3,4,4,2,2,1,1,1,3,1,3,4,1,2,2,4,3,4,1,4,0,3,1,3,4,3,3,3,2,2,1,3,0,2,2,3,4,5,1,3,1,4,3,4,2,3,4,3,4,4,2,1,1,2,4,2,4,2,1,3,2,5,2,4,4,3,3,4,2,4,5,4,2,1,0,0,4,1,4,2,5,2,3,0,2,3,4,5,4,4,2,1,3,3,3,3,2,2,4,3,3,3,3,4,5,3,3,2,2,2,4,5,3,3,3,2,2,5,3,3,3,3,3,3,4,1,3,4,4,3,3,6,4,4,3,3,4,2,4,2,5,0,1,3,3,3,4,4,3,2,5,4,4,4,2,6,2,2,5,5,4,4,4,3,2,4,2,3,3,0,3,5,2,3,2,2,3,3,4,3,3,4,2,1,3,3,2,3,2,3,3,0,3,2,3,5,3,4,2,4,3,4,1,2,3,5,3,0,2,2,3,1,3,4,2,2,2,4,4,3,3,1,3,4,3,3,3,5,3,1,2,4,2,3,3,3,4,1,4,4,5,4,2,3,3,5,2,4,6,5,1,5,2,4,2,4,4,2,4,3,2,1,3,3,3,4,3,2,4,4,4,4,2,5,1,2,1,3,3,3,4,3,4,4,4,4,5,3,1,4,4,4,4,5,4,5,3,3,1,3,5,0,1,3,3,2,3,3,1,3,6,3,3,4,1,3,4,5,4,3,1,3,3,3,1,2,4,3,3,3,2,2,8,5,0,5,2,3,6,3],
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
