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
    meta(content='ArleighBurkeHighDetailPrototype.x3d',name='title'),
    meta(content='Prototype for an Arleigh Burke (DDG51) Class Navy Destroyer. Proto allows weapon placements, hull number, and ship name markings',name='description'),
    meta(content='Patrick Sullivan',name='creator'),
    meta(content='27 May 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Prototypes, DDG51, Arleigh Burke destroyer',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkeHighDetailPrototype.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='HullNumber',url=["../../../Savage/ModelDetailing/HullNumbers/HullNumberPrototype.x3d#HullNumber","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/HullNumberPrototype.x3d#HullNumber"],
      field=[
      field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='FirstNumber',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='SecondNumber',type='SFInt32')]),
    ProtoDeclare(appinfo='Prototype of a DDG51 Class Destroyer',name='DDG51',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='URL for the ISIC seal that is found on the side of most navy ships (e.g. "../../ShipCrests/COMDESRON31/DESRON31.x3d")',name='ISIC',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo="The first (or only) digit of the ship's hull number [0-9]. Note -1 for no number",name='HullNumber1',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo="The second digit of the ship's hull number [0-9]. Note: -1 for no number",name='HullNumber2',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='ForwardBowWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='StarboardBowWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='PortBowWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='StarboardBridgeWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='PortBridgeWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='StarboardMidshipWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='PortMidshipWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='StarboardFlightDeckWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='PortFlightDeckWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='SternFlightDeckWeapon',type='MFString',value=["none"])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          #  Ship Model 
          children=[
          Transform(DEF='DDG51ShipModel',
            children=[
            Inline(url=["../../../Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkeHighDetail.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkeHighDetail.x3d"])]),
          #  Hull Numbers 
          Transform(DEF='StarboardBowHullNumber',rotation=(0.85,0.499,-0.163,.729),translation=(70.513,5.099,2.082),
            children=[
            ProtoInstance(DEF='ShipNumber',name='HullNumber',
              IS=IS(
                connect=[
                connect(nodeField='FirstNumber',protoField='HullNumber1'),
                connect(nodeField='SecondNumber',protoField='HullNumber2')]))]),
          Transform(DEF='PortBowHullNumber',rotation=(.047,.967,-.249,2.776),translation=(71.44,5.429,-3.826),
            children=[
            ProtoInstance(name='HullNumber',
              IS=IS(
                connect=[
                connect(nodeField='FirstNumber',protoField='HullNumber1'),
                connect(nodeField='SecondNumber',protoField='HullNumber2')]))]),
          #  ISIC Seals 
          Transform(DEF='StarboardSeal',rotation=(1,0,0,-.249),translation=(16.615,16.528,1.856),
            children=[
            Transform(
              children=[
              Inline(DEF='ISICSeal',
                IS=IS(
                  connect=[
                  connect(nodeField='url',protoField='ISIC')]))])]),
          Transform(DEF='PortSeal',rotation=(1,0,0,.251),translation=(16.615,16.528,-3.808),
            children=[
            Transform(rotation=(0,1,0,-3.14),
              children=[
              Inline(USE='ISICSeal')])]),
          #  Weapon Placements 
          Transform(DEF='ForwardBowWeapon',rotation=(0,1,0,3.14),translation=(75.405,10.171,2.394),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='ForwardBowWeapon')]))]),
          Transform(DEF='StarboardBowWeapon',rotation=(0,1,0,3.14),translation=(43.981,7.816,8.47),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='StarboardBowWeapon')]))]),
          Transform(DEF='PortBowWeapon',translation=(43.981,7.816,-10.049),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='PortBowWeapon')]))]),
          Transform(DEF='StarboardBridgeWeapon',rotation=(0,1,0,-1.57),translation=(29.833,16.4,7.702),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='StarboardBridgeWeapon')]))]),
          Transform(DEF='PortBridgeWeapon',rotation=(0,1,0,1.57),translation=(30.399,16.4,-9.104),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='PortBridgeWeapon')]))]),
          Transform(DEF='StarboardMidshipWeapon',rotation=(0,1,0,-1.57),translation=(10.066,6.2,8.632),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='StarboardMidshipWeapon')]))]),
          Transform(DEF='PortMidshipWeapon',rotation=(0,1,0,1.57),translation=(10.066,6.2,-9.793),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='PortMidshipWeapon')]))]),
          Transform(DEF='StarboardFlightDeckWeapon',rotation=(0,1,0,3.14),translation=(-51.47,3.922,8.129),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='StarboardFlightDeckWeapon')]))]),
          Transform(DEF='PortFlightDeckWeapon',translation=(-51.686,3.922,-9.088),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='PortFlightDeckWeapon')]))]),
          Transform(DEF='SternFlightDeckWeapon',rotation=(0,1,0,1.57),translation=(-71.592,3.922,6.292),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='SternFlightDeckWeapon')]))])])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ArleighBurkeHighDetailPrototype.py")
