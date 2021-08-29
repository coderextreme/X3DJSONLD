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
        texture=ImageTexture(url=['../../images/4/Malacca15-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.297423545807372,100.04106255949056,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[-4,0,3,4,-1,0,4,3,1,1,0,0,91,3,1,3,-4,7,9,60,3,1,0,-1,-8,11,-2,1,3,24,9,8,-20,5,15,0,5,-1,0,0,14,7,3,7,1,-3,16,0,-1,2,2,0,198,199,178,22,4,15,-1,2,0,0,2,6,5,5,-7,-1,2,0,-3,1,3,7,10,76,189,183,93,7,3,3,1,0,-18,3,5,4,2,11,-5,0,-2,0,3,8,5,45,267,175,7,4,6,3,-27,1,10,9,3,6,-5,-2,4,2,2,3,3,-5,9,8,126,145,56,5,5,4,-7,-26,-5,10,5,7,0,-6,7,0,3,1,1,1,5,8,32,432,274,13,12,4,9,6,8,12,9,8,2,1,2,1,3,0,0,0,8,27,263,486,76,29,3,2,19,13,7,6,3,7,2,-6,2,1,2,2,4,-1,7,57,641,377,29,59,6,-7,1,6,5,7,5,6,-3,4,0,1,1,3,3,6,9,72,477,459,23,13,10,12,0,5,9,5,4,6,8,0,6,3,3,0,1,4,12,168,630,701,229,19,8,11,-2,12,7,3,9,52,1,2,0,3,6,3,7,16,348,74,400,585,429,25,11,-80,55,7,7,6,10,7,-1,2,10,4,1,4,6,19,187,41,161,563,322,32,15,3,-2,-1,10,5,6,6,4,3,4,2,2,4,2,3,126,7,126,205,32,121,1,7,-11,11,3,5,4,3,1,0,1,3,2,3,1,3,5,0,4,54,16,23,71,6,0,0,3,3,8,4,2,3,1,3,4,1,3,3,0,2,0,-1,9,0,7,73,2,4,5,4,10,11,1,2,0,2,1,2,6,5,4,3,0,6,1,7,8,0,0,7,3,4,8,17,1,3,0,4,2,3,4,3,0,3,3,0,1,1,0,10,-7,4,7,4,4,7,2,0,2,1,3,4,0,2,11,8,8,-1,0,6,4,0,-3,5,4,8,7,10,1,0,1,3,2,3,2,4,3,0,12,14,5,8,0,0,2,5,4,4,6,4,0,3,1,1,2,1,6,2,4,4,-4,1,2,3,-1,-10,6,4,2,9,7,6,0,0,2,0,4,1,0,3,4,2,3,0,0,1,1,2,4,8,4,8,10,17,0,0,2,2,3,2,0,5,4,3,1,1,0,3,0,-1,4,9,4,5,9,22],
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
