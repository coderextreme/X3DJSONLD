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
        texture=ImageTexture(url=['../../images/4/Malacca2-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-5.69708174070451,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[2,1,1,1,0,2,3,2,0,2,2,3,3,4,3,3,3,3,2,1,1,2,0,1,2,1,1,1,1,1,3,2,3,3,3,3,3,1,1,3,2,2,2,2,1,1,1,1,1,1,0,1,2,3,3,3,2,2,2,3,2,2,2,1,1,1,1,1,1,0,1,2,1,1,2,2,3,2,3,2,2,2,2,2,1,2,1,1,2,2,2,1,0,2,3,3,1,2,1,2,3,2,3,2,2,2,2,3,2,2,2,1,3,1,2,2,2,0,1,2,2,2,2,2,2,2,2,2,1,1,1,2,3,3,2,2,2,1,1,2,1,2,2,1,1,2,2,3,2,1,1,1,3,2,1,2,2,2,1,2,1,3,2,2,1,2,3,4,3,1,0,2,2,3,1,2,1,2,2,1,2,2,3,3,2,1,3,4,4,2,2,2,2,2,2,1,2,2,0,1,1,1,2,2,2,1,2,3,3,3,2,3,1,2,2,1,2,2,2,2,0,0,1,2,1,2,2,4,4,4,1,2,3,2,2,3,2,3,3,1,0,5,0,0,0,0,1,2,2,4,2,2,2,5,4,3,1,2,3,2,2,2,3,2,-2,0,0,1,0,2,2,3,1,4,5,4,3,2,3,3,4,3,2,1,230,210,0,-2,0,2,1,1,0,4,4,2,5,5,2,3,4,4,2,2,2,132,372,581,4,1,0,0,0,3,4,5,4,5,4,4,5,4,3,4,4,62,256,806,569,645,1,6,2,1,2,4,4,5,5,5,5,4,3,3,4,0,29,258,691,1247,805,570,0,1,5,4,2,5,4,5,7,5,4,6,3,67,90,263,356,466,587,1084,543,543,4,0,2,1,2,6,6,5,4,3,4,12,11,218,226,447,622,779,994,1073,546,542,3,5,3,7,4,5,4,3,7,4,51,117,276,351,558,707,759,1106,1102,794,589,549,0,1,2,2,1,0,0,1,3,84,144,279,448,361,653,1216,967,1154,774,519,566,582,2,1,2,0,0,1,1,6,71,212,232,469,406,466,961,1492,1383,571,444,501,492,549,3,1,4,0,0,2,1,4,73,202,237,424,404,461,985,1470,1392,566,429,500,499,585],
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
