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
        texture=ImageTexture(url=['../../images/4/Malacca7-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[3,3,3,3,5,3,3,3,3,2,2,2,2,3,3,6,7,18,264,663,671,297,3,2,4,3,4,6,5,3,4,4,3,2,1,3,3,4,4,69,358,616,746,340,3,2,4,2,3,5,4,5,5,3,2,3,3,3,4,4,3,264,956,486,406,348,3,3,2,2,2,3,3,4,6,4,4,3,3,2,1,4,2,52,728,719,320,8,3,3,2,2,3,1,2,3,6,3,4,5,4,4,1,3,2,2,313,563,280,7,1,3,3,4,4,3,0,4,4,4,6,7,5,3,2,2,5,5,3,242,396,26,3,3,2,4,4,5,3,2,3,3,5,4,4,5,5,1,1,3,4,36,249,3,1,4,2,3,3,4,4,3,3,2,3,4,6,7,4,5,4,1,2,177,107,2,4,5,2,2,2,4,3,3,2,2,2,5,3,4,4,5,5,4,1,376,41,0,5,3,4,3,3,3,2,3,4,3,2,2,2,3,5,7,3,3,3,367,6,2,5,5,5,5,3,3,2,3,5,4,3,3,3,3,3,4,3,6,5,258,5,4,6,6,5,3,4,4,2,2,3,4,3,4,4,0,1,4,3,1,3,5,3,3,6,6,7,6,3,3,1,2,5,2,4,4,3,3,1,4,2,3,7,4,7,3,5,6,5,6,6,6,6,4,5,1,3,4,3,3,3,3,2,3,2,4,3,4,4,5,4,6,6,7,6,5,5,2,4,1,4,6,5,4,4,2,6,5,6,4,4,4,3,4,5,6,6,6,7,3,4,3,2,0,3,4,2,1,2,1,3,4,4,3,3,5,4,5,5,8,7,4,5,3,1,1,2,4,4,2,1,1,2,1,4,4,3,4,2,3,6,7,5,7,7,5,6,0,4,2,0,2,4,3,5,3,6,4,4,3,4,4,4,6,6,5,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,3,5,4,4,4,2,4,5,6,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,3,6,3,3,6,6,4,5,4,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,5,4,5,5,4,3,3,4,7,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,4,5,4,5,6,2,3,4,5,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
