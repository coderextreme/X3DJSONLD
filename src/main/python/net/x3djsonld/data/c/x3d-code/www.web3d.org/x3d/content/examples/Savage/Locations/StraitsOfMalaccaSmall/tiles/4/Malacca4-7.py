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
        texture=ImageTexture(url=['../../images/4/Malacca4-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[28,26,9,7,3,5,2,1,2,1,2,1,1,3,2,4,3,3,0,4,2,4,28,28,5,0,1,4,3,1,1,3,3,1,1,4,2,4,2,4,4,3,4,3,30,27,3,2,5,2,2,3,1,2,4,2,0,1,2,2,3,2,3,3,5,4,26,23,7,8,5,0,2,3,5,1,3,3,1,1,1,3,0,3,2,3,4,3,27,22,9,1,3,2,2,3,2,2,2,3,3,2,1,3,1,3,3,2,3,3,23,23,7,-5,2,2,2,1,2,3,4,2,1,4,4,3,1,2,1,2,3,3,6,16,13,4,3,6,3,2,3,1,3,0,2,2,2,2,2,3,2,2,3,1,6,11,3,4,1,2,3,3,4,0,2,3,0,3,3,3,2,3,2,1,4,3,15,4,9,11,1,4,4,3,7,3,4,2,4,1,1,5,3,2,4,5,2,2,3,11,7,6,3,6,6,3,1,3,3,2,4,5,3,3,2,3,4,3,4,3,6,4,9,2,6,5,4,1,4,2,4,2,3,2,4,2,2,5,3,3,3,4,7,7,10,5,4,5,4,1,1,2,6,2,4,1,1,5,1,4,1,4,3,2,13,15,9,4,4,5,4,5,4,3,3,3,3,2,3,3,3,4,1,2,2,3,3,15,4,4,4,5,4,4,5,2,6,5,5,6,3,3,3,3,3,4,2,3,9,6,5,5,4,4,2,2,3,4,4,3,3,3,3,3,4,4,2,3,3,2,7,14,1,5,6,3,3,4,4,3,4,3,6,3,4,5,4,5,3,1,3,4,7,8,6,2,4,3,4,4,5,4,3,1,7,4,2,4,5,6,5,4,5,5,5,3,1,2,4,3,0,3,4,2,4,4,4,4,4,5,6,5,5,5,4,4,11,1,4,3,1,3,2,4,3,4,3,3,5,4,5,4,4,4,5,5,3,4,8,3,7,4,4,3,1,3,4,2,5,4,5,5,5,5,3,4,4,3,3,4,8,5,2,4,6,2,6,3,2,4,4,4,5,6,4,5,5,6,4,6,4,5,6,3,0,3,3,4,1,4,4,5,6,3,3,5,5,6,4,4,5,6,4,5,4,3,0,3,5,4,2,5,2,5,4,4,3,5,6,4,4,3,4,5,2,3],
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
