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
        texture=ImageTexture(url=['../../images/4/Malacca1-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-6.704456788552255,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1,1,2,2,3,3,4,4,11,32,2,4,3,74,261,182,149,91,33,28,50,40,0,1,2,2,3,3,2,2,2,10,2,2,3,4,41,112,167,100,98,111,74,76,1,1,2,3,19,2,29,2,2,0,2,2,3,3,7,245,25,48,48,17,22,35,1,0,3,1,3,110,110,2,1,1,2,2,2,2,12,116,41,8,11,10,14,20,2,1,1,3,3,2,2,1,2,2,2,2,2,2,3,23,3,4,5,24,49,53,2,2,0,1,1,0,2,1,2,1,2,3,2,1,1,3,4,4,6,6,10,20,2,2,2,2,2,1,1,1,1,2,2,2,1,2,0,4,2,1,3,7,51,75,1,1,2,1,2,1,1,1,1,2,1,2,2,3,3,2,2,2,4,51,150,168,1,2,1,2,2,2,1,1,1,0,2,3,1,3,2,2,2,0,4,106,526,579,2,1,1,1,1,1,2,1,2,1,1,2,2,2,2,3,1,2,4,395,466,550,1,1,0,0,1,1,1,2,1,1,2,1,2,1,2,3,2,2,2,128,183,102,1,2,2,0,1,2,1,1,2,2,2,2,3,3,2,2,2,2,1,46,182,288,2,1,1,2,1,0,1,1,1,31,1,3,2,2,3,2,0,5,0,4,309,248,1,0,1,0,0,0,0,0,2,2,2,2,2,2,1,3,3,1,2,2,3,5,1,1,0,0,0,0,1,1,1,2,2,2,2,3,3,3,2,1,3,2,4,4,0,1,1,0,0,0,1,3,1,2,2,75,2,1,2,2,3,2,4,-2,0,2,0,1,0,0,1,1,2,1,1,2,2,3,2,2,2,1,9,5,3,1,2,3,1,2,0,0,1,2,2,4,1,2,1,2,4,3,0,2,38,0,0,5,13,6,1,1,2,2,2,2,2,7,2,2,0,1,3,2,386,450,155,19,0,4,1,2,2,1,2,16,109,4,5,4,2,2,0,3,1,5,419,322,49,19,5,2,7,7,2,2,294,292,585,46,5,3,3,3,3,2,2,4,57,35,39,15,3,4,0,1,1,5,320,254,582,61,0,5,3,3,3,3,3,4,58,35,35,15,2,4,2,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
