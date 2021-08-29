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
    meta(content='HullNumberPrototype.x3d',name='title'),
    meta(content='Hull number prototype: accept values for the first second and third numbers, return 3D numerals with highlighting.',name='description'),
    meta(content='Patrick Sullivan',name='creator'),
    meta(content='20 February 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Hull Numbers, ship markings',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/HullNumberPrototype.x3d',name='identifier'),
    meta(content='../../license.html',name='license'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='One or two digit hull number',name='HullNumber',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='FirstNumber',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='SecondNumber',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='ThirdNumber',type='SFInt32',value=-1)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(scale=(1.7,1.7,1.7),
          children=[
          Transform(translation=(-.665,0,0),
            children=[
            Switch(DEF='Numbers',whichChoice=-1,
              IS=IS(
                connect=[
                connect(nodeField='whichChoice',protoField='FirstNumber')]),
              children=[
              Inline(DEF='Zero',url=["../../ModelDetailing/HullNumbers/Zero.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Zero.x3d","../../ModelDetailing/HullNumbers/Zero.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Zero.wrl"]),
              Inline(DEF='One',url=["../../ModelDetailing/HullNumbers/One.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/One.x3d","../../ModelDetailing/HullNumbers/One.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/One.wrl"]),
              Inline(DEF='Two',url=["../../ModelDetailing/HullNumbers/Two.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Two.x3d","../../ModelDetailing/HullNumbers/Two.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Two.wrl"]),
              Inline(DEF='Three',url=["../../ModelDetailing/HullNumbers/Three.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Three.x3d","../../ModelDetailing/HullNumbers/Three.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Three.wrl"]),
              Inline(DEF='Four',url=["../../ModelDetailing/HullNumbers/Four.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Four.x3d","../../ModelDetailing/HullNumbers/Four.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Four.wrl"]),
              Inline(DEF='Five',url=["../../ModelDetailing/HullNumbers/Five.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Five.x3d","../../ModelDetailing/HullNumbers/Five.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Five.wrl"]),
              Inline(DEF='Six',url=["../../ModelDetailing/HullNumbers/Six.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Six.x3d","../../ModelDetailing/HullNumbers/Six.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Six.wrl"]),
              Inline(DEF='Seven',url=["../../ModelDetailing/HullNumbers/Seven.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Seven.x3d","../../ModelDetailing/HullNumbers/Seven.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Seven.wrl"]),
              Inline(DEF='Eight',url=["../../ModelDetailing/HullNumbers/Eight.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Eight.x3d","../../ModelDetailing/HullNumbers/Eight.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Eight.wrl"]),
              Inline(DEF='Nine',url=["../../ModelDetailing/HullNumbers/Nine.x3d","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Nine.x3d","../../ModelDetailing/HullNumbers/Nine.wrl","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/Nine.wrl"])])]),
          Transform(translation=(.8,0,0),
            children=[
            Switch(whichChoice=-1,
              IS=IS(
                connect=[
                connect(nodeField='whichChoice',protoField='SecondNumber')]),
              children=[
              Inline(USE='Zero'),
              Inline(USE='One'),
              Inline(USE='Two'),
              Inline(USE='Three'),
              Inline(USE='Four'),
              Inline(USE='Five'),
              Inline(USE='Six'),
              Inline(USE='Seven'),
              Inline(USE='Eight'),
              Inline(USE='Nine')])]),
          Transform(translation=(2.265,0,0),
            children=[
            Switch(whichChoice=-1,
              IS=IS(
                connect=[
                connect(nodeField='whichChoice',protoField='ThirdNumber')]),
              children=[
              Inline(USE='Zero'),
              Inline(USE='One'),
              Inline(USE='Two'),
              Inline(USE='Three'),
              Inline(USE='Four'),
              Inline(USE='Five'),
              Inline(USE='Six'),
              Inline(USE='Seven'),
              Inline(USE='Eight'),
              Inline(USE='Nine')])])])])),
    ProtoInstance(name='HullNumber',
      fieldValue=[
      fieldValue(name='FirstNumber',value=7),
      fieldValue(name='SecondNumber',value=8)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HullNumberPrototype.py")
