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
    meta(content='dardanel2-2.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel2-2.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel2-2.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.16643453115464,26.49987728550963,0.0),geoSystem=["GD"],height=[77,257,242,171,229,311,464,472,695,599,440,360,420,278,206,179,168,139,129,92,93,114,43,115,57,290,430,485,410,485,577,395,368,292,264,417,265,324,234,274,246,217,93,110,25,54,77,205,272,329,272,345,329,370,313,291,267,297,439,367,278,317,323,229,149,123,4,11,39,54,101,164,165,212,217,295,388,314,469,611,611,584,405,304,416,367,247,243,3,0,32,152,136,131,133,201,231,262,252,358,464,604,569,479,447,459,580,400,313,366,2,2,2,49,10,24,99,149,156,186,355,442,305,454,398,375,523,446,467,403,303,284,1,4,3,4,8,122,250,292,267,116,236,205,257,246,337,393,463,599,563,492,458,411,106,3,-1,1,4,61,155,235,316,247,216,274,316,299,298,439,620,494,345,226,230,225,173,102,27,5,2,0,57,123,224,164,210,239,281,372,540,411,510,353,208,136,90,106,178,204,252,33,5,3,-1,61,89,84,104,149,178,218,249,363,347,381,332,302,134,135,174,109,104,12,55,9,3,5,20,84,85,181,65,122,162,363,308,266,234,355,233,166,95,51,129,171,53,10,-5,13,3,85,207,215,69,150,118,201,161,113,113,182,44,106,96,56,111,167,155,43,2,6,1,8,34,172,35,44,85,90,124,121,28,101,121,102,223,69,147,205,66,83,13,7,9,4,5,27,17,49,24,72,31,83,6,0,4,0,122,165,101,78,46,122,44,26,4,-8,5,0,-8,-3,0,-1,2,4,2,3,5,3,247,144,172,194,80,157,68,28,5,1,3,4,0,2,4,4,4,2,3,1,2,2,21,225,234,206,183,173,34,70,7,2,1,3,0,4,5,4,0,2,2,2,2,1,2,3,171,89,161,80,74,109,19,130,2,1,4,1,4,3,2,1,0,0,5,1,0,3,3,12,56,58,180,118,64,45,76,5,4,3,4,3,3,5,2,5,3,5,0,2,0,0,6,13,40,61,13,109,120,73,21,18,4,6,0,2,2,5,2,2,1,2,1,1,0,8,6,2,0,21,20,47,39,93,60,34,6,4,2,0,1,1,0,2,1,-3,0,4,5,4,-1,21,19,46,38,94,60,34,4,4,1,2,1,0],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
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

print ("python x3d.py load successful for dardanel2-2.py")
