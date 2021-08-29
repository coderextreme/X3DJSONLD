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
    meta(content='dardanel0-0.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/1/dardanel0-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_1_01',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(40.16643453115464,26.983082655714444,135600.91168049985),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.16643453115464,26.983082655714444,0.0),child1Url=['../../tiles/2/dardanel0-1.x3d'],child2Url=['../../tiles/2/dardanel1-1.x3d'],range=162721.1,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/1/dardanel0-1.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,26.49987728550963,0.0),geoSystem=["GD"],height=[1,0,1,1,0,-2,1,26,125,115,234,270,371,656,963,967,499,375,528,481,469,499,1,0,1,0,0,3,0,1,1,10,23,33,291,417,400,601,717,573,327,428,362,348,454,489,189,89,54,74,192,24,-3,-1,3,18,33,62,165,149,249,591,332,241,238,240,219,341,503,688,681,1033,977,1186,830,506,394,183,187,349,396,691,705,634,598,465,329,301,180,359,629,520,338,785,854,1191,1198,1258,1133,1070,661,887,474,718,477,500,575,473,365,375,67,93,134,320,145,267,225,382,584,694,978,711,477,318,268,265,325,316,302,567,570,580,213,221,214,121,190,247,438,472,655,706,348,515,793,873,735,357,397,315,160,179,284,273,454,460,505,359,269,268,375,247,187,171,258,238,502,451,415,329,245,217,358,184,532,558,344,262,273,496,369,507,471,320,179,151,140,84,293,282,523,604,271,428,477,703,596,540,137,240,334,526,299,366,599,462,612,422,325,329,320,194,98,379,399,340,794,542,509,485,90,165,388,356,576,441,321,206,191,153,93,257,98,217,211,123,171,414,219,425,186,200,6,16,29,33,249,299,467,470,425,525,343,132,50,29,26,81,44,46,125,129,321,313,157,127,2,22,228,140,400,351,353,230,100,47,70,43,20,0,11,35,39,10,0,0,150,199,125,1,6,8,23,46,134,63,2,54,56,79,119,62,42,-5,-4,0,0,-3,2,239,176,37,68,0,2,3,4,4,2,1,3,0,-1,1,73,8,0,-3,-4,-3,1,1,1,2,5,5,36,122,26,5,4,2,2,2,3,3,1,0,-1,-4,-2,0,8,50,3,0,2,2,2,3,22,159,351,37,7,-3,5,2,-1,1,1,0,1,0,58,98,149,261,260,310,53,57,75,69,29,46,158,338,514,104,6,1,0,-1,-1,0,74,33,26,149,69,84,160,231,524,437,358,198,198,305,498,545,523,152,3,2,-1,0,62,33,27,188,268,201,153,109,118,144,111,182,152,158,193,241,327,416,417,334,0,1,68,120,113,78,75,196,203,247,288,233,194,128,135,184,265,265,215,263,230,25,26,9,63,118,114,79,74,198,199,246,285,233,193,129,135,183,261,263,210,266,230,25,25,8],normalPerVertex=False,xDimension=22,xSpacing=0.046019558,zDimension=22,zSpacing=0.07032614,
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

print ("python x3d.py load successful for dardanel0-0.py")
