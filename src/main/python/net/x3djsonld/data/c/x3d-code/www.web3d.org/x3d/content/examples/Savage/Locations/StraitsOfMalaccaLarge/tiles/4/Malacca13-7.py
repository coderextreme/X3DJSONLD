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
        texture=ImageTexture(url=['../../images/4/Malacca13-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.384043785620684,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,0,0,0,2,139,32,3,0,19,9,26,124,163,490,60,45,334,837,920,-99,-99,-99,0,3,2,0,23,84,1,3,6,189,46,58,421,142,66,326,471,653,722,-99,-99,-99,4,2,2,2,357,348,10,8,3,38,40,81,64,77,67,179,694,1316,1489,-99,-99,-99,8,2,2,0,16,107,4,-10,4,4,18,27,38,36,71,351,649,1527,1331,-99,-99,-99,1,1,3,3,4,4,0,6,5,16,12,20,27,38,34,60,938,711,754,-99,-99,-99,0,3,2,2,3,3,0,3,6,9,22,14,15,24,43,69,111,102,77,-99,-99,-99,1,0,2,3,2,3,5,5,4,15,49,35,22,21,26,41,117,156,238,-99,-99,-99,2,0,1,2,3,4,-3,6,4,7,15,37,53,39,55,62,66,52,56,-99,-99,-99,1,2,1,2,0,2,1,2,32,18,16,59,38,55,54,72,88,105,193,-99,-99,-99,0,2,3,2,0,4,5,20,745,302,14,62,69,72,55,156,556,101,121,-99,-99,-99,2,2,2,5,2,1,3,2,297,27,39,41,33,56,66,230,195,150,121,-99,-99,-99,1,3,5,3,5,2,0,2,7,21,23,34,44,74,434,111,207,340,260,-99,-99,-99,3,3,4,5,5,6,-1,4,4,7,24,54,87,50,79,93,699,772,591,-99,-99,-99,2,3,2,3,4,4,4,4,7,10,13,35,565,126,161,93,215,361,539,2,2,1,2,3,2,2,2,0,4,3,4,4,97,26,59,72,62,269,97,615,355,2,2,2,0,1,3,2,7,6,5,7,5,5,3,14,75,93,119,80,107,202,346,2,1,1,1,3,4,-1,-2,0,4,7,2,14,7,19,28,46,95,193,265,115,108,1,2,1,0,1,0,5,2,2,3,4,5,8,16,55,47,38,52,165,205,205,262,0,0,1,1,0,0,0,9,3,3,4,12,15,58,35,34,27,37,154,109,334,285,1,1,0,0,1,0,4,4,4,5,5,10,212,56,32,24,45,112,196,95,311,257,119,311,0,0,1,1,5,4,5,4,27,32,78,55,53,118,35,155,272,173,207,220,139,272,2,1,0,2,4,5,5,5,29,22,99,70,43,108,36,147,276,154,198,212],
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
