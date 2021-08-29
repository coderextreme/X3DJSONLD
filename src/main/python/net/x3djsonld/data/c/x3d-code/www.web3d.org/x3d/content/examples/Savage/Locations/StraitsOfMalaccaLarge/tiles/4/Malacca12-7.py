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
        texture=ImageTexture(url=['../../images/4/Malacca12-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,4,2,2,1,0,0,0,0,0,0,0,11,11,3,16,15,23,13,19,-99,-99,-99,3,1,0,0,0,0,0,0,0,0,0,4,63,9,11,24,22,28,18,-99,-99,-99,1,1,0,0,0,0,0,0,0,0,2,0,269,10,15,13,52,18,27,-99,-99,-99,0,2,0,1,0,1,0,0,0,1,1,1,5,10,11,15,39,26,26,-99,-99,-99,2,0,0,0,0,0,0,0,1,1,2,1,13,7,24,33,48,60,82,-99,-99,-99,0,0,0,0,0,0,0,0,0,2,1,1,18,7,49,465,688,57,59,-99,-99,-99,0,0,1,-1,1,0,1,2,0,2,1,2,6,14,17,463,640,43,36,-99,-99,-99,0,0,1,0,0,1,1,1,0,1,1,0,1,18,89,667,825,335,293,-99,-99,-99,0,0,0,2,0,2,0,1,1,1,0,1,14,13,24,681,663,558,304,-99,-99,-99,0,0,-1,0,0,0,2,1,0,0,0,-1,19,15,14,42,157,85,83,-99,-99,-99,0,0,0,0,-13,5,1,2,1,1,3,14,12,6,12,308,723,159,231,-99,-99,-99,1,1,2,0,1,1,3,0,2,0,5,10,10,11,18,458,1206,417,151,-99,-99,-99,0,0,0,3,2,2,2,3,4,2,2,7,2,9,11,527,135,720,452,-99,-99,-99,1,-1,1,2,4,2,4,3,6,10,11,2,2,17,14,47,62,1117,933,-99,-99,-99,0,0,1,0,2,3,3,3,3,9,4,4,4,11,19,32,45,834,987,-99,-99,-99,-2,-1,0,2,2,4,2,3,2,4,6,5,9,39,38,51,48,350,476,-99,-99,-99,1,0,2,3,0,3,2,0,2,3,3,6,7,34,31,41,207,485,574,-99,-99,-99,0,0,0,0,1,1,1,-8,7,5,17,229,26,25,44,50,287,802,648,-99,-99,-99,0,2,2,0,1,1,2,2,5,9,21,328,26,14,116,37,854,910,1254,-99,-99,-99,6,1,2,2,2,67,1,7,7,3,37,248,52,27,25,37,44,348,398,-99,-99,-99,1,2,2,4,185,40,2,0,13,7,26,99,140,464,55,62,361,858,922,-99,-99,-99,0,0,0,2,139,32,3,0,19,9,26,124,163,490,60,45,334,837,920],
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
