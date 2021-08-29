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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='H53eFuselage.x3d',name='title'),
    meta(content='H-53E fuselage body created by extrusion. Dimensions in proportion with fuselage.',name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='15 March 2004',name='created'),
    meta(content='1 August 2010',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/ch-53-2.jpg',name='Image'),
    meta(content='CH-53E Sea Stallion Fuselage',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/CH53UnitedStates/H53eFuselage.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Fuselage',
      children=[
      Transform(scale=(.9,.6,1),translation=(0,1.54,0),
        children=[
        Shape(DEF='Upper',
          appearance=Appearance(
            material=Material(ambientIntensity=.137,diffuseColor=(.569,.58,.58),specularColor=(.671,.459,.439))),
          geometry=Extrusion(creaseAngle=.9,crossSection=[(-.7,-.7),(-.7,0),(-.682842,.119746),(-.661911,.222491),(-.646716,.267878),(-.60622,.349389),(-.554784,.426368),(-.494975,.494975),(-.426368,.554784),(-.349389,.60622),(-.267878,.646716),(-.181606,.675717),(-.0908031,.693779),(0,.7),(.0908031,.693779),(.181606,.675717),(.267878,.646716),(.349389,.60622),(.426368,.554784),(.494975,.494975),(.554784,.426368),(.60622,.349389),(.646716,.267878),(.661911,.222491),(.678596,.145589),(.7,0),(.7,-.7),(-.7,-.7)],spine=[(0,0,3.5),(0,0,0),(0,0,-3.5)]))]),
      Shape(DEF='Main',
        appearance=Appearance(
          material=Material(diffuseColor=(.569,.58,.58),specularColor=(.671,.459,.439))),
        geometry=Extrusion(creaseAngle=.9,crossSection=[(1,1),(1.07512,.928603),(1.12076,.805833),(1.12663,-.791435),(1.06777,-.940862),(1,-1),(.928603,-1.07512),(.805833,-1.12076),(-.791435,-1.12663),(-.940862,-1.06777),(-1,-1),(-1.07512,-.928603),(-1.12076,-.805833),(-1.12663,.791435),(-1.06777,.940862),(-1,1),(-.928603,1.07512),(-.805833,1.12076),(.791435,1.12663),(.940862,1.06777),(1,1)],endCap=False,solid=False,spine=[(0,0,3.5),(0,0,-3.5)]))]),
    Group(DEF='Cockpit',
      children=[
      Shape(DEF='Windscreen',
        appearance=Appearance(
          material=Material(diffuseColor=(.569,.58,.58),specularColor=(.671,.459,.439))),
        geometry=Extrusion(creaseAngle=.628,crossSection=[(-1.12372,-8.71754e-5),(-1.09727,.0286393),(-1.06684,.0579294),(-1.03271,.0876118),(-.99515,.117515),(-.954441,.147469),(-.910862,.177301),(-.86469,.206841),(-.791178,.250228),(-.713395,.291993),(-.632278,.33156),(-.548765,.36835),(-.463794,.401786),(-.378302,.431289),(-.321481,.448488),(-.265123,.463511),(-.209505,.476188),(-.154906,.486346),(-.101604,.493815),(-.0498761,.498423),(0,.5),(.0510009,.498348),(.103921,.493507),(.158464,.485666),(.214336,.475009),(.27124,.461724),(.328883,.445997),(.386969,.428015),(.445202,.407965),(.532183,.374418),(.617835,.337267),(.701163,.297141),(.78117,.254669),(.856859,.210482),(.927235,.165208),(.970709,.134733),(1.01108,.104241),(1.04806,.0739204),(1.08135,.0439562),(1.11066,.0145355),(1.12372,8.71754e-5),(1.12663,-.791435),(1.06777,-.940862),(1,-1),(.928603,-1.07512),(.805833,-1.12076),(-.791435,-1.12663),(-.940862,-1.06777),(-1,-1),(-1.07512,-.928603),(-1.12076,-.805833),(-1.12372,-8.71754e-5)],endCap=False,scale=[(.1,.1),(.2691,.2691),(.3509,.3509),(.4164,.4164),(.4764,.4764),(.5364,.5364),(.6018,.6018),(.6727,.6727),(.7655,.7655),(.8909,.8909),(1,1)],solid=False,spine=[(0,0,4.9),(0,0,4.89164),(0,0,4.86985),(0,0,4.83847),(0,0,4.79594),(0,0,4.73777),(0,0,4.65368),(0,0,4.53478),(0,0,4.32927),(0,0,3.94638),(0,0,3.5)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for H53eFuselage.py")
