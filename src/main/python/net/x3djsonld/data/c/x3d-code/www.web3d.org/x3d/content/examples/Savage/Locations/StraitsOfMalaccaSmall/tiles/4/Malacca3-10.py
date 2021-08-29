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
        texture=ImageTexture(url=['../../images/4/Malacca3-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[2,3,1,3,3,2,2,1,2,0,2,1,3,2,1,5,2,2,2,4,0,0,1,1,1,3,2,3,3,3,2,1,2,1,2,2,3,3,0,3,5,3,0,-2,1,1,2,3,4,2,3,2,2,1,2,1,1,2,2,1,1,1,2,1,4,4,0,3,3,3,4,3,3,2,3,2,3,1,3,3,3,2,3,3,0,3,2,5,3,4,2,1,2,3,1,3,3,3,2,2,3,2,2,1,3,7,1,0,-1,7,5,4,3,0,1,1,3,3,2,2,2,1,4,2,1,0,2,1,0,1,8,14,7,4,3,1,2,2,2,3,3,2,4,3,3,1,2,1,3,4,-3,9,12,14,5,4,4,3,3,2,1,3,2,3,3,2,2,2,1,1,0,15,11,5,12,12,4,3,4,4,2,3,3,2,3,1,2,3,2,1,-1,4,12,11,7,10,9,12,3,5,6,6,4,3,0,3,3,3,3,1,1,0,12,9,10,6,10,9,12,14,5,5,5,6,5,5,5,3,2,2,2,-6,9,8,7,11,8,9,9,8,13,11,4,4,3,2,5,5,3,4,2,1,-2,7,7,8,10,6,9,12,10,5,11,13,6,4,4,4,5,4,4,5,6,6,9,7,6,9,8,8,9,12,12,13,9,12,4,5,4,4,4,5,5,6,1,12,5,7,10,7,10,5,13,11,14,11,12,12,4,5,5,5,3,3,8,-2,10,9,9,8,11,10,12,11,14,13,10,14,12,9,5,5,5,5,4,7,1,8,8,8,9,9,10,16,14,11,13,12,12,11,11,10,4,4,3,4,12,7,9,8,8,11,8,10,14,10,8,13,10,11,16,13,9,11,2,8,6,4,11,8,11,6,9,11,8,12,12,14,19,10,13,14,9,9,11,14,11,8,9,9,10,7,12,9,9,11,12,13,11,18,15,15,14,11,8,9,12,15,6,11,18,11,7,10,10,9,9,14,10,12,12,17,13,9,12,17,10,14,32,23,7,32,25,20,8,12,12,15,11,10,14,13,13,15,12,9,11,26,22,19,59,27,14,25,36,34,14,10,10,10,11,13,15,17,12,11,10,12,17,19,24,23,56,60,13,27,44,36,15,9,11,9,12,12,15,17,11,11,10,13,14,20,21,22,50,51],
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
