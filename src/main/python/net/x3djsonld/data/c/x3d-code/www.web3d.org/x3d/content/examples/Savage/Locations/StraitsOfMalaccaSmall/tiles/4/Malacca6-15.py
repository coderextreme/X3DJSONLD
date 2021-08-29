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
        texture=ImageTexture(url=['../../images/4/Malacca6-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,105.05106279745279,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[4,2,-4,1,3,2,3,0,0,-2,1,0,2,0,1,3,3,1,3,3,0,1,2,1,7,3,4,3,1,0,3,2,0,3,2,1,2,0,4,0,-1,1,0,1,2,1,6,1,2,1,3,3,0,0,0,1,2,-1,3,0,0,4,0,2,1,2,4,6,4,2,0,3,1,3,1,0,3,2,1,2,1,2,1,1,1,0,0,3,0,0,3,3,1,1,4,3,4,2,4,0,1,1,1,3,0,6,0,0,0,1,1,5,2,2,3,4,1,2,2,0,5,1,1,1,0,1,3,5,2,0,1,-1,6,2,3,4,3,4,3,3,3,2,2,4,3,1,2,3,0,2,0,2,2,6,0,1,1,4,3,3,3,2,3,2,4,4,2,0,0,1,0,2,2,2,0,3,1,4,2,4,4,4,3,3,2,3,3,2,0,3,2,3,0,0,2,1,2,4,2,5,2,2,3,1,1,5,1,4,2,1,5,1,3,1,0,5,3,1,0,1,1,1,4,4,3,2,3,5,2,2,0,4,3,5,2,2,3,3,0,1,2,3,4,2,5,2,2,3,6,3,8,4,6,1,2,1,3,2,0,2,3,3,1,1,3,1,3,0,3,1,1,3,4,5,6,4,3,0,4,3,1,2,0,3,4,0,3,6,4,2,3,5,1,2,0,3,2,2,3,3,4,0,2,4,2,1,2,4,3,4,5,4,2,3,1,2,1,2,2,2,4,2,2,1,4,3,4,1,3,0,1,1,5,3,4,2,2,1,0,1,3,0,1,5,5,4,3,4,0,3,2,1,2,4,1,2,4,3,5,3,2,4,4,2,2,2,3,3,6,4,0,2,2,2,5,1,6,6,2,5,4,3,3,3,0,1,4,0,3,0,4,5,4,3,5,3,1,0,6,5,3,3,4,3,3,5,4,0,2,0,3,2,3,5,2,0,2,3,2,1,3,2,3,6,3,0,1,6,1,2,1,1,1,0,2,0,7,0,1,0,3,0,1,1,2,4,3,1,4,2,1,3,1,2,0,0,2,3,2,3,3,3,1,0,0,3,3,3,3,4,3,4,5,3,4,4,2,2,0,0,3,1,4,0,2,2,0,1,3,2,2,3,3,5,2,3,5,2,3,2,0,0,3,0,2,2],
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
