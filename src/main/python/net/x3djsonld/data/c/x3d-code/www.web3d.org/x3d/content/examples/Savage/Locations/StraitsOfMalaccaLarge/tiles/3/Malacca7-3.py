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
    GeoViewpoint(description='GeoViewpoint_3_73',geoSystem=['GDC'],position=(7.398793881316173,99.88675033605634,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(7.398793881316173,99.88675033605634,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca14-6.x3d'],child2Url=['../../tiles/4/Malacca14-7.x3d'],child3Url=['../../tiles/4/Malacca15-6.x3d'],child4Url=['../../tiles/4/Malacca15-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca7-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(6.391418833468428,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[-99,-99,0,1,3,3,5,3,2,142,6,0,2,4,4,18,43,35,38,241,265,201,-99,-99,0,2,3,4,5,3,530,146,14,1,0,4,7,46,68,375,282,205,202,300,-99,-99,1,2,1,0,2,5,3,3,0,0,1,23,19,85,109,321,98,98,291,181,-99,-99,1,3,2,1,1,3,161,3,3,7,4,420,58,57,73,220,85,132,38,31,-99,-99,4,3,1,2,1,1,9,1,1,7,12,98,177,59,55,155,29,85,41,47,-99,-99,4,3,3,3,2,1,0,6,25,22,32,394,104,52,52,200,19,30,42,25,-99,-99,5,4,3,4,1,2,2,32,21,62,105,407,75,26,20,116,60,9,2,6,4,4,3,4,4,4,4,4,1,126,48,62,436,207,51,26,17,78,17,0,1,5,5,3,2,4,3,4,3,12,2,7,248,153,433,74,38,27,4,9,7,3,5,5,3,5,4,3,2,1,5,13,6,11,226,408,143,40,22,4,2,34,1,3,8,4,5,5,4,4,2,6,21,10,18,24,64,542,39,32,9,1,4,3,2,2,0,4,3,4,4,4,3,21,16,21,24,45,552,58,23,13,2,1,7,2,1,3,3,3,4,3,61,4,4,88,122,33,50,62,405,28,20,4,2,1,2,1,1,1,3,3,3,4,5,3,4,243,43,12,28,231,149,22,13,2,5,3,0,3,2,3,2,1,6,4,8,4,15,57,26,19,57,335,145,23,7,1,1,5,3,1,2,2,2,2,6,9,39,6,47,81,44,30,74,481,52,24,2,2,3,-1,1,0,2,2,3,2,6,6,10,70,51,80,243,34,72,421,40,34,5,2,3,2,1,1,1,2,2,2,3,6,32,33,100,86,63,48,47,102,24,5,5,2,5,4,4,2,2,2,3,1,83,25,25,105,59,98,166,59,47,310,21,8,2,3,3,1,4,2,2,2,2,2,89,41,105,101,67,48,222,60,67,647,26,3,3,3,2,0,2,2,2,3,2,1,161,108,52,109,36,48,45,49,813,150,22,3,4,2,5,3,1,2,1,2,2,2,142,103,53,104,34,46,45,47,778,104,25,3,5,3,3,2,1,1,1,2,2,1],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
