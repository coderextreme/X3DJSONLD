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
    component(level=1,name='Geospatial'),
    meta(content='dardanel1-1.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel1-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel1-1.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.79722229877732,26.016671915304816,0.0),geoSystem=["GD"],height=[2,1,22,2,4,2,24,43,83,121,180,189,106,61,45,62,72,79,58,60,66,69,64,40,27,1,2,3,2,16,42,64,119,218,160,157,44,118,106,99,93,97,71,73,44,25,43,4,1,2,6,10,45,58,88,178,145,41,94,141,165,178,165,137,104,86,2,1,1,2,2,2,25,18,41,88,143,224,71,101,219,189,268,271,215,151,142,112,1,1,1,2,2,3,20,38,55,74,53,31,131,128,223,245,296,306,272,275,208,212,2,1,2,3,3,3,7,76,68,19,33,66,134,195,270,290,313,352,372,340,329,321,3,3,1,3,2,2,5,35,48,17,19,26,47,157,205,249,329,425,390,406,340,317,0,0,0,1,2,2,30,16,18,16,18,31,47,53,186,201,289,339,415,433,371,342,2,3,15,1,4,4,3,10,11,13,33,59,63,101,180,214,212,263,400,431,440,426,0,2,2,2,2,3,3,8,13,12,43,68,120,128,175,281,319,263,343,403,416,419,2,2,1,3,3,4,2,23,8,12,17,32,48,77,85,198,325,359,417,447,389,418,3,2,3,1,4,5,4,8,7,5,55,87,70,156,180,176,200,352,392,307,388,360,3,3,1,3,3,2,3,3,3,3,4,2,62,119,232,287,279,305,370,305,328,363,3,2,3,4,2,0,1,3,5,4,3,3,1,3,184,341,381,332,220,246,243,233,2,2,6,3,2,2,1,31,3,5,5,4,3,3,9,142,199,170,92,157,166,232,1,4,1,5,1,3,3,29,35,73,2,3,5,3,3,75,96,68,94,144,189,286,1,3,3,3,3,6,2,3,65,92,121,71,1,3,5,33,25,73,157,245,266,250,2,1,3,4,6,4,3,4,-1,130,173,172,115,2,5,4,8,147,344,435,216,200,3,2,2,2,5,4,1,4,3,109,108,119,114,170,5,4,1,35,81,138,145,176,2,1,1,0,1,6,4,5,4,78,28,61,183,129,104,3,6,10,19,17,26,33,0,2,2,2,0,6,4,4,3,2,69,67,191,191,195,37,4,46,25,88,65,72,0,1,2,3,0,5,3,5,3,2,70,67,191,193,191,32,3,45,28,88,70,77],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel1-1.py")
