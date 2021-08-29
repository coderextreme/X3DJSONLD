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
        texture=ImageTexture(url=['../../images/4/Malacca2-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,104.21606275779241,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[10,4,11,6,6,13,4,19,19,15,18,39,15,6,4,7,23,4,6,0,1,0,15,3,13,13,11,9,13,26,7,15,13,30,7,6,5,1,2,5,21,1,2,0,6,6,8,10,8,7,11,7,2,3,43,25,2,4,3,2,0,3,1,0,3,1,6,18,9,10,11,9,12,10,6,0,3,2,3,3,3,4,1,0,2,1,3,1,16,9,19,3,10,9,16,14,10,3,3,3,3,2,2,4,0,4,7,6,0,1,9,11,14,6,8,10,15,7,5,3,3,1,3,0,2,2,2,3,0,2,2,1,5,6,15,7,15,15,9,9,3,4,2,2,4,1,1,1,1,1,1,1,2,2,9,6,14,1,8,8,18,9,3,5,3,2,4,4,1,2,1,3,1,2,2,2,9,14,14,16,15,9,9,5,3,3,3,4,2,2,1,2,2,2,1,1,3,2,8,1,10,7,17,4,12,5,3,3,5,3,4,2,3,2,3,1,0,2,1,2,6,5,8,8,13,10,5,5,3,3,3,3,3,4,3,1,3,2,1,3,1,1,11,0,1,10,-2,15,3,5,5,4,2,3,5,2,2,4,4,1,1,3,2,0,9,8,-1,0,8,7,3,6,4,3,2,3,4,3,3,1,2,3,1,1,1,2,3,5,-11,41,9,3,4,6,3,4,5,5,3,1,4,1,2,2,2,1,3,2,19,3,8,12,6,2,2,6,4,5,3,4,6,3,4,3,3,3,4,2,0,3,14,8,8,3,1,1,1,3,3,4,3,5,3,3,3,3,4,1,3,3,2,2,48,10,5,6,3,1,2,2,2,2,4,6,3,3,2,1,4,2,2,2,2,2,28,28,14,10,3,2,2,1,3,3,1,4,5,4,5,1,2,2,4,3,2,1,29,8,7,11,0,2,3,3,3,4,1,3,3,3,5,4,4,3,4,1,2,2,29,17,3,6,9,1,4,2,2,4,2,3,2,4,2,3,4,1,3,2,1,2,47,39,8,3,19,2,1,3,5,2,2,3,3,2,3,4,3,2,2,3,3,0,42,9,7,23,2,1,2,2,4,4,2,0,1,3,2,3,1,2,4,3,3,3,40,11,5,20,2,0,2,2,4,3,3,1,1,4,3,3,2,2,4,2,2,2],
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
