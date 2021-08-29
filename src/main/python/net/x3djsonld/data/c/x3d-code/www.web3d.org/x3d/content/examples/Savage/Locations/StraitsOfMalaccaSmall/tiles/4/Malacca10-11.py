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
        texture=ImageTexture(url=['../../images/4/Malacca10-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[3,2,5,4,5,5,3,6,4,5,6,5,6,4,5,4,5,4,2,6,6,6,4,2,3,5,5,5,5,4,5,4,5,5,6,4,4,5,4,3,4,5,5,4,3,3,3,5,4,5,3,5,6,4,5,3,3,3,8,3,6,3,4,4,3,4,4,2,4,3,5,4,4,5,4,4,5,5,7,6,6,5,4,5,3,3,4,2,5,2,5,3,4,5,6,2,4,5,8,5,6,5,5,4,6,7,3,0,6,5,5,2,3,3,5,4,5,4,3,6,7,6,5,6,9,4,7,4,5,4,4,5,4,4,5,2,4,5,3,3,4,4,1,5,5,5,5,5,5,0,3,5,3,3,3,4,5,4,4,3,4,6,3,6,4,6,6,4,5,4,6,5,4,5,4,4,89,2,6,3,3,5,3,4,4,3,3,1,3,4,3,4,6,5,3,5,4,3,107,3,5,3,6,4,5,3,5,5,4,3,8,3,6,4,4,3,2,6,5,4,27,3,4,4,4,3,5,4,5,7,6,3,4,5,4,8,2,5,4,5,4,4,8,6,4,6,3,3,4,5,5,4,4,4,4,3,3,2,2,4,3,4,6,6,5,6,6,4,4,3,4,5,4,5,4,6,5,4,6,4,4,4,5,6,5,5,5,7,4,7,4,3,5,5,2,5,2,3,2,3,4,4,2,5,5,6,6,5,3,7,6,6,6,6,6,6,5,4,4,7,6,5,4,6,4,6,5,5,5,5,4,4,7,5,7,7,3,5,5,3,4,3,8,4,5,5,3,5,6,5,4,5,6,2,3,4,7,7,6,5,4,4,5,4,4,6,5,4,4,5,3,5,4,3,10,5,7,6,9,5,5,4,6,3,2,7,3,5,5,3,6,6,4,6,4,4,12,9,3,62,4,5,9,7,7,7,6,3,4,5,3,3,7,5,4,4,4,5,9,13,8,33,5,3,6,5,6,5,8,7,7,6,4,4,7,7,5,5,5,4,15,13,9,2,7,4,4,5,4,7,6,3,7,4,6,4,6,5,6,5,3,5,11,11,7,11,6,4,7,5,4,6,2,7,7,6,6,4,5,6,5,5,6,6,12,12,6,8,6,3,8,5,8,5,4,7,7,6,6,4,4,5,5,5,7,6],
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
